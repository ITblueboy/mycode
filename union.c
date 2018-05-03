#include <stdio.h>
union Un
{
  int i;
  char c;
}un;
int main()
{
  printf("%p\n",&(un.i));
  printf("%p\n",&(un.c));
  printf("%p\n",&un);
  return 0;
}
