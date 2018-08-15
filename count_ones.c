#include<stdio.h>
#include<stdlib.h>

int count_ones(int num)
{
  int ret=0;
  while(num)
  {
    ret++;
    num=num&(num-1);
  }
  return ret;
}

int main()
{
  int num=0;
  scanf("%d",&num);
  printf("%d\n",count_ones(num));
  return 0;
}
