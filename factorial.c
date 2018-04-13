#include <stdio.h>
int main()
{
  int num=0;
  scanf("%d",&num);
  int sum=1;
  int i=1;
  for(i=1;i<=num;i++)
  {
    sum=sum*i;
  }
  printf("sum=%d",sum);
  return 0;
}
