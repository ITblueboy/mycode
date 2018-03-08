#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p = malloc(100);
	if (p != NULL)
	{

	}
	else
	{
		exit(EXIT_FAILURE);
	}
	int *ptr = NULL;
	ptr= realloc(p,1000);
	if (ptr != NULL)
	{
		p = ptr;
	}
	free(p);
	p=NULL:
	return 0;
}