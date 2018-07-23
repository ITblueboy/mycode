#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/select.h>
#include<sys/timerfd.h>
#include<stdint.h>
#include<fcntl.h>
#include<string.h>
int main()
{
  int tfd=timerfd_create(CLOCK_MONOTONIC,TFD_NONBLOCK|TFD_CLOEXEC);
  if(tfd==-1)
  {
    perror("fd_perror");
    exit(-1);
  }
  struct itimerspec is;
  memset(&is,0,sizeof(is));
  is.it_value.tv_sec=1;
  is.it_interval.tv_sec=1;
  timerfd_settime(tfd,0,&is,NULL);

  fd_set rset;
  int kfd=fileno(stdin);
  int maxfd=(kfd>tfd?kfd:tfd)+1;
  while(1)
  {
    FD_ZERO(&rset);
    FD_SET(kfd,&rset);
    FD_SET(tfd,&rset);
    int nready=select(maxfd,&rset,NULL,NULL,NULL);
    if(nready==-1)continue;
    if(FD_ISSET(tfd,&rset))
    {
      uint64_t a;
      read(tfd,&a,sizeof(a));
      printf("定时器到\n");
    }
    if(FD_ISSET(kfd,&rset))
    {
      char buf[1024]={};
      int n=read(kfd,buf,1024);
      if(n<=0)
      {
       break;
      }
      printf("buf=[%s]\n",buf);
    }
  }
}
