#include<stdio.h>
#include <sys/types.h>
#include<unistd.h>

int main()
{
  int ret=fork();
  if(ret>0)
  {
    printf("父进程：%d\n",ret);
  }
  else if(ret==0)
  {
    printf("子进程：%d\n",ret);
  }
  else 
  {
    printf("fork error\n");
  }
  sleep(1);
  return 0;
}
