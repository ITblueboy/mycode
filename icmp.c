#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<linux/ip.h>

int main()
{ 
  int socket_fd=socket(AF_INET,SOCK_STREAM,IPPROTO_ICMP);
  if(socket_fd<0)
  {
    perror("socket error\n");
    return 1;
  }

  int opt=1;
  setsockopt(socket_fd,IPPROTO_IP,IP_HDRINCL,&opt,sizeof(opt));
  char buf[1500];
  while(1)
  {
    memset(buf,0x00,sizeof(buf));
    int ret=read(socket_fd,buf,sizeof(buf));
    if(ret<0)
    {
      perror("read error");
      break;
    }
    struct iphdr* pip=(struct iphdr*)buf;
    struct in_addr addr;
    addr.s_addr=pip->daddr;
    printf("%s\n",inet_ntoa(addr));
  }
}
