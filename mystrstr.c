#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


const char* mystrstr(const char* dest,const char* src)
{
  assert(dest&&src);
  const char* p=dest;
  const char* q=src;
  while(*src!='\0')
  {
    q=src;
    p=dest;
    while(*p++==*q++)
    {
      if(*q=='\0')
        return dest;
    }
    if(*dest=='\0')
    {
      break;
    }
    dest++;
  }
  return NULL;
}
int main()
{
  char str[]="hello worldi";
  char str1[]="world";
  const char* p=mystrstr(str,str1);
  printf("%p\n",p);
  printf("%p\n",str+6);
  return 0;
}
