#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
  pid_t id=fork();
  if(id<0)
  {
    perror("fork");
    return 0;
  }
  else if(id==0)
  {
    printf("子进程:%d\n",getpid());
    sleep(10);
  }
  else 
  {
    printf("父进程:%d",getpid());
    sleep(3);
    exit(0);
  }
  return 0;
}
