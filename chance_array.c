#include <stdio.h>
void myprintf(int arr[],int sum)
{
  int i=0;
  for(;i<sum;i++)
  {
    printf("%d",arr[i]);
  }
  printf("\n");
}
void swap(int *a,int *b)
{
  int tmp=*a;
  *a=*b;
  *b=tmp;
}
int main()
{
  int arr1[]={0,1,2,3,4,5,6,7,8,9};
  int arr2[]={10,11,12,13,14,15,16,17,18,20};
  int size=sizeof(arr1)/sizeof(arr1[0]);
  int i=0;
  myprintf(arr1,size);
  myprintf(arr2,size);
  for(;i<size;i++)
  {
    swap(&arr1[i],&arr2[i]);
  }
  myprintf(arr1,size);
  myprintf(arr2,size);
  return  0;
}
