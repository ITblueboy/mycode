#include <stdio.h>
int main()
{
  int array[]={0,1,2,3,4,5,6,7,8,9};
  int max=array[0];
  int size=sizeof(array)/sizeof(array[0]);
  int i=1;
  for(;i<size;i++)
  {
    if(max<array[i])
    {
      max=array[i];
    }
  }
  printf("%d\n",max);
  return 0;
}
