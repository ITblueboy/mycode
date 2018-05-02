#include <stdio.h>
#include<assert.h>

char* mystrcpy(char* dest,const char* src)
{
  assert(dest);
  assert(src);
  char* ret=dest;
  while(*dest++=*src++)
  {
    ;
  }
  return ret;
}
int main()
{
  char arr1[]="abcdefg";
  char arr2[8]={0};
  mystrcpy(arr2,arr1);
  printf("%s\n",arr2);
  return 0;
}
