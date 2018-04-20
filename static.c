#include <stdio.h>

int fun()
{
  static int count=1;
  return ++count;
}
int main()
{
  int sum=0;
  sum=fun()-fun()*fun();
  printf("%d\n",sum);
  return 0;
}
