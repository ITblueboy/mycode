#include<stdio.h>
#include<stdlib.h>

size_t mystrlen(const char* src)
{
  size_t len=0;
  const char* p=src;
  while(*p!='\0')
  {
    len++;
    p++;
  }
  return len;
}

int main()
{
  char str[]="hfsgkgfsetuiugbds";
  size_t ret=mystrlen(str);
  printf("%ld\n",ret);
  return 0;
}
