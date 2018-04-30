#include <stdio.h>

int Recursion(char* p)
{
  if(*p=='\0')
  {
    return 0;
  }
  else 
  return 1+Recursion(p+1);
}
int main()
{
  char* ptr="abdcsgeda";
  printf("%d\n",Recursion(ptr));
  return 0;
}
