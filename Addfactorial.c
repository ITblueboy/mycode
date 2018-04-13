#include <stdio.h>
int main()
{
  int sum=0;
  int i=0,j=0;
  for(i=1;i<4;i++)
  {
    int num=1;
    for(j=1;j<=i;j++)
    {
      num=num*j;
    }
    sum=sum+num;
  }
  printf("sum=%d\n",sum);
  return 0;
}
