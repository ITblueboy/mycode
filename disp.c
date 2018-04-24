#include<stdio.h>

int main()
{
  int i=1;
  int j=i;
  for(;i<=9;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("%d*%d=%d\t",i,j,i*j);
    }
  }
  return 0;
}
