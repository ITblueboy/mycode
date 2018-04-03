#include "color.h"
#include <stdio.h>
#include<unistd.h>


int main()
{
  int i=0;
  char process[100]={0};
  const char* lable="|/-\\";
  while(i<=100)
  {
    if(i>=0&&i<=20)
    {
        printf(RED);
    }
    if(i>20&&i<=40)
    {
        printf(GREEN);
    }
    if(i>40&&i<=60)
    {
        printf(BLUE);
    }
    else if(i>60&&i<=80)
    {
      printf(YELLOW);
    }
    else if(i>80&&i<=100) 
    {
        printf(BROWN);
    }
    printf("[%-100s][%d%%][%c]\r",process,i,lable[i%4]);
    fflush(stdout);
    process[i++]='#';
    sleep(1);
  }
  printf("\033[03m");
  return 0; 
}
