#include <stdio.h>

union Un1
{
  char c[5];
  int i;
}un1;

union Un2
{
  short c[7];
  int i;
}un2;
int main()
{
  printf("un1=%d\n",sizeof(un1));
  printf("un2=%d\n",sizeof(un2));

  return 0;
}
