#include <stdio.h>

int binsearch(int x,int array[],int size)
{
  int begin=0;
  int end=size-1;
  while(begin<=end)
  {
    int mid=begin+(end-begin)/2;
    if(array[mid]>x)
    {
      end=mid-1;
    }
    else if(array[mid]<x)
    {
      begin=mid+1;
    }
    else {
      {
        return mid;
      }
    }
  }
  return -1;
}
int main()
{
  int array[]={1,2,3,4,5,6,7,8,9,10};
  int n=sizeof(array)/sizeof(array[0]);
  printf("%d\n",binsearch(3,array,n));
  return 0;
}
