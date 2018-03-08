#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num = 0;
	scanf("%d", &num);
	int *ptr = NULL;
	ptr = (int*)malloc(num*sizeof(int));
	if (ptr != NULL)
	{
		for (int i = 0; i < num; i++)
		{
			*(ptr + i) = 0;
		}
	}
	free(ptr);
	ptr = NULL;
	return 0;
}