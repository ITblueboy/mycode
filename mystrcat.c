#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

char* mystrcat(char* src,const char* dest)
{
  assert(src&&dest);
  char* p=src;
  while(*p!='\0')
    p++;
  while(*dest!='\0')
  {
    *p++=*dest++;
  }
  *p='\0';
  return src;
}


int main()
{
  char str1[30]="hello ";
  char str2[]="world";
  printf("%s\n",mystrcat(str1,str2));

  return 0;
}
