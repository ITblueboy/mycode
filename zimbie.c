#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
  pid_t id=fork();
  if(id<0)
  {
    perror("fork");
    return 1;
  }
  else if(id>0)
  {
    printf("父进程：%d\n",getpid());
    sleep(30);
  }
  else 
  {
    printf("子进程：%d\n",getpid());
    sleep(5);
    exit(EXIT_SUCCESS);
  }
  return 0;
}
