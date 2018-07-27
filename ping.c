#include<unistd.h>
#include<sys/time.h>
#include<stdio.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<netinet/in.h>
#include<string.h>
#include<netdb.h>
#include<netinet/ip_icmp.h>
#include<signal.h>
#include<stdlib.h>

#define SIZE 1024
#define LENG 56

long total_time=0;
int sendnum=0;
int recvnum=0;
char sendpack[SIZE];
char recvpack[SIZE];
struct sockaddr_in from;

void handle(int s)
{
  (void)s;
  printf("--- ping statistics ---\n");
  printf("%d packets transmitted,%d received,%.3f%% packet loss,time %ld ms\n",
      sendnum,recvnum,((double)(sendnum-recvnum)/sendnum)*100,total_time);
  exit(0);
}

long diftime(struct timeval* end,struct timeval* start)
{
  long ret=(end->tv_sec-start->tv_sec)*1000+(end->tv_usec-start->tv_usec)/1000;
  return ret;
}

unsigned short chksum(unsigned short* addr,int len)
{
  unsigned int ret =0;
  while(len>1)
  {
    ret+=*addr++;
    len-=2;
  }
  if(len==1)
  {
    ret+=*(unsigned char*)addr;
  }
  ret=(ret>16)+(ret&0xffff);
  ret+=(ret>>16);

  return (unsigned short)~ret;
}

int pack(int num,pid_t pid)
{
  memset(sendpack,0x00,sizeof(sendpack));
  struct icmp* p=(struct icmp*)sendpack;
  p->icmp_type=ICMP_ECHO;
  p->icmp_code=0;
  p->icmp_cksum=0;
  p->icmp_seq=num;
  p->icmp_id=pid;

  struct timeval tval;
  gettimeofday(&tval,NULL);
  memcpy((void*)p->icmp_data,(void*)&tval,sizeof(tval));
  
  p->icmp_cksum=chksum((unsigned short*)sendpack,LENG+8);
  return LENG+8;
}

void unpack(char* buf)
{
  struct ip* pip=(struct ip*)buf;
  struct icmp* picmp=(struct icmp*)(buf+(pip->ip_hl<<2));
  struct timeval end;
  gettimeofday(&end,NULL);
  long ret=diftime(&end,(struct timeval*)(picmp->icmp_data));
  total_time+=ret;
  printf("%d bytes from %s:icmp_seq=%d ttl=%d time=%ld ms\n",
      LENG,inet_ntoa(from.sin_addr),picmp->icmp_seq,
      pip->ip_ttl,ret);
}
void send_packet(int sfd,pid_t pid,struct sockaddr_in ad)
{
  sendnum++;
  int r=pack(sendnum,pid);
  sendto(sfd,sendpack,r,0,(struct sockaddr*)&ad,sizeof(ad));
}

void recv_packet(int sfd,pid_t pid)
{
  memset(recvpack,0x00,sizeof(recvpack));
  socklen_t len=sizeof(from);
  int r=recvfrom(sfd,recvpack,SIZE,0,(struct sockaddr*)&from,&len);
  recvnum++;
  unpack(recvpack);
}
int main(int argc,char* argv[])
{
  if(argc!=2)
  {
    perror("参数不对");
    return 1;
  }
  printf("OK\n");
  signal(SIGINT,handle);
 // struct timeval begin;                                                                                          
 // gettimeofday(&begin,NULL);  
 // struct timeval end;                                                                                            
 // gettimeofday(&end,NULL);  
 // struct sockaddr addr;
  in_addr_t ddr;
  struct sockaddr_in ad;
  if((ddr=inet_addr(argv[1]))==INADDR_NONE)
  {
      struct hostent* pent=gethostbyname(argv[1]);
      if(pent==NULL)
      {
      perror("gethostbyname error");
      return(1);
      }
      memcpy((char*)&ad.sin_addr,(char*)pent->h_addr,pent->h_length);
  }
  else 
  {
      ad.sin_addr.s_addr=ddr;
  }
  int socket_fd=socket(PF_INET,SOCK_RAW,IPPROTO_ICMP);
  if(socket_fd==-1)
  {
    perror("socket error\n");
    return 1;
  }
  ad.sin_family=AF_INET;
  printf("PING %s (%s) %d bytes of data.\n",argv[1],
      inet_ntoa(ad.sin_addr),LENG);
  pid_t pid=getpid();
  
  while(1)
  {
    send_packet(socket_fd,pid,ad);
    recv_packet(socket_fd,pid);
    sleep(1);
  }
  return 0;
}
