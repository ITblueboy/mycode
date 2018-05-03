#include <stdio.h>
struct S1
{
  char c1;
  int i;
  char c2;
}s1;

struct S2
{
  char c1;
  char c2;
  int i;
}s2;

struct S3
{
  double d;
  char c;
  int i;
}s3;

struct S4
{
  char c1;
  struct S3 s5;
  double d;
}s4;
int main()
{
  printf("s1=%d\n",sizeof(s1));
  printf("s2=%d\n",sizeof(s2));
  printf("s3=%d\n",sizeof(s3));
  printf("s4=%d\n",sizeof(s4));
  return 0;
}
