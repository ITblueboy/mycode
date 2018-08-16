#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int mystrcmp2(const char* src,const char* dest)
{
  int ret=0;
  while(!(ret=(unsigned char)*src-(unsigned char)*dest)&&(*dest))
  {
    src++;
    dest++;
  }
  if(ret<0)
  {
    ret=-1;
  }
  if(ret>0)
  {
    ret=1;
  }
  return ret;
}

int mystrcmp(const char* src,const char* dest)
{
  assert(src);
  assert(dest);
  while(*src==*dest)
  {
    if(*src=='\0')
    {
      return 0;
    }
    src++;
    dest++;
  }
  if(*src>*dest)
  {
    return 1;
  }
  else 
  {
    return -1;
  }
}
int main()
{
  char str1[]="asdfgh";
  char str2[]="asdfghy";
  int ret=mystrcmp2(str1,str2);
  printf("%d\n",ret);
  return 0;

}
