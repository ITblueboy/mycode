#include <stdio.h>

int Fib(int count)
{
  if(count==1||count==2)
  {
    return 1;
  }
  return Fib(count-1)+Fib(count-2);
}
int main()
{
  int num=0;
  scanf("%d",&num);
  printf("%d\n",Fib(num));
  return 0;
}
