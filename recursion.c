#include <stdio.h>

void Recursion(int n)
{
  if(n>9)
  {
    Recursion(n/10);
  }
  printf("%d\t",n%10);
}
int main()
{
  int num=1234;
  // scanf("%d\n",&num);
  Recursion(num);
  return 0;
}
