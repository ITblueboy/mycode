#include <stdio.h>

int fib(int n)
{
  int result=1;
  int pre_result=1;
  int next_pre_result=0;
  while(n>2)
  {
    next_pre_result=pre_result;
    pre_result=result;
    result=next_pre_result+pre_result;
    n--;
  }
  return result;
}
int main()
{
  int num=0;
  scanf("%d",&num);
  printf("%d\n",fib(num));
  return 0;
}
