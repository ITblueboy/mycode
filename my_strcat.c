#include <stdio.h>
#include<assert.h>
char* mystrcat(char* dest,const char* src)
{
  assert(dest);
  assert(src);
  char* ret=dest;
  while(*dest!='\0')
  {
    dest++;
  }
  while(*src!='\0')
  {
    *dest++=*src++;
  }
  return ret;
}
int main()
{
  char arr1[15]="I love";
  char arr2[]="you";
  mystrcat(arr1,arr2);
  printf("%s\n",arr1);
  return 0;
}
