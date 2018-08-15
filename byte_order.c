#include<stdio.h>
#include<stdlib.h>

union AA 
{
  int j;
  char i;
};

int main()
{
  union AA aa;
  aa.j=1;
  if(aa.i==1)
  {
    printf("小端模式");
  }
  if(aa.i==0)
  {
    printf("大端模式");
  }
  printf("%c",aa.i);
  return 0;
}
