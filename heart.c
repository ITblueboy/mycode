#include<stdio.h>
#include<unistd.h>

int main()
{
  float y=0,x=0;
  for( y=1.5f;y>-1.5f;y-=0.1f)
  {
    for( x=-1.5f;x<1.5f;x+=0.05f)
    {
      float a=x*x+y*y-1;
      if(a*a*a-x*x*y*y*y<=0.0f)
      {
        printf("*");
      }
      else 
      {  printf(" ");

      }
    }
    printf("\n");
  }
  return 0;
}
