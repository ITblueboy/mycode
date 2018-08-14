#include<stdio.h>
#include<stdlib.h>

int count_one(int num)
{
  int ret=0;
  int i=0;
  for(;i<32;i++)
  {
    if(((num>>i)&1)==1)
    {
      ret++;
    }
  }
  return ret;
}

int main()
{
  int num=0;
  scanf("%d",&num);
  printf("%d\n",count_one(num));
  return 0;
}
