#include <stdio.h>

int main()
{
  int i=1;
  int ret=(++i)+(++i);
  printf("ret=%d\n",ret);
  printf("i=%d",i);
  return 0;
}
