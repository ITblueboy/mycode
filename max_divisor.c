#include<stdio.h>

int main()
{
  int m=0;
  int n=0;
  scanf("%d,%d",&m,&n);
  if(m<n)
  {
    m=m^n;
    n=m^n;
    m=m^n;
  }
  while(n>0)
  {
    int i=m%n;
    m=n;
    n=i;
  }
  printf("%d\n",m);
  return 0;
}
