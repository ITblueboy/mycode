#include<stdio.h>
#include<assert.h>

const char* find(const char* src,const char* dest)
{
  assert(src!=NULL && dest!=NULL);
  const char* cur=src;
  while(*cur!='\0')
  {
    const char* p=dest;
    const char* res=cur;
    if(*cur==*p)
    {
      res=cur;
      while(*p++==*cur++)
      {
      if(*p=='\0')
      {
        return res;
      }
      }
    }
    cur++;
  }
  return NULL;
}

int main()
{
  const char* str="asasddcdsfsvbfdhsdadad";
  const char* str1="dhsdadadaa";
  printf("%p\n",find(str,str1));
  return 0;
}
