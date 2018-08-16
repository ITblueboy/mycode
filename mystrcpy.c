#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

char* mystrcpy(char* dest,const char* src)
{
  assert(src);
  assert(dest);
  char* p=dest;
  while(*src!='\0')
  {
    *p++=*src++;
  }
  return dest;
}

int main()
{
  char str1[]="qwertyuiop";
  char str[15]={0};
  printf("%s\n",mystrcpy(str,str1));
  return 0;
}
