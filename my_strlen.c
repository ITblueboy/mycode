#include<stdio.h>

int mystrlen(const char* src)
{
  int count=0;
  while(*src++!='\0')
  {
    count++;
  }
  return count;
}
int main()
{
  char array[]="abcdef";
  int ret=mystrlen(array);
  printf("%d\n",ret);
  return 0;
}
