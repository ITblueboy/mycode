#include<stdio.h>
#include<stdlib.h>

int find(int a[],int leng,int num)
{
  int begin=0;
  int end=leng-1;
  int mid=0;
  while(end>begin)
  {
    mid=begin+(end-begin)/2;
    if(a[mid]==num)
    {
      return mid;
    }
    if(a[mid]>num)
    {
      end=mid-1;
    }
    else 
    {
      begin=mid+1;
    }
  }
  return -1;
}


int main()
{
  int array[]={1,2,3,4,5,6,7,8,9,10};
  int len=sizeof(array)/sizeof(array[0]);
  printf("%d\n",find(array,len,8));
  return 0;
}
