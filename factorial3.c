#include <stdio.h>

int fac(int n)
{
  int sum=1;
   while(n)
   {
     sum=sum*n;
     n--;
   }
   return sum;
}
int main()
{
  int num=0;
  scanf("%d",&num);
  printf("%d\n",fac(num));
  return 0;
}
