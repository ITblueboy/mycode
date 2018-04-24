#include<stdio.h>
#include<math.h>
int main()
{
  int num=100;
  for(num=100;num<=200;num++)
  {
    double i=sqrt((double)num);
    int k=0;
    for(k=2;k<=(int)i;k++)
    {
      if(num%k!=0)
      {
        printf("%d\t",num);
      }
    }
  }
  return 0;
}
