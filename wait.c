#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<string.h>
#include<error.h>

int main()
{
  pid_t pid;
  pid=fork();
  if(pid==-1)
  {
    perror("fork()");
    exit(1);
  }
  else if(pid==0)
  {
    sleep(20);
    exit(10);
  }
  else 
  {
    int status;
    int ret=wait(&status);
    if(ret>0&&(status&0X7F)==0)
    {
      printf("child exit code:%d\n",(status>>8)&0XFF);
    }
    else if(ret>0)
    {
      printf("sig code:%d\n",status&0X7F);
    }
  }
}
