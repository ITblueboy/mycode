#include<stdio.h>
#include<Windows.h>
int main()
{
	int i = 1;
	int j = 1;
	for (; i <= 9; i++)
	{
		for (j=1; j <= i; j++)
		{
			printf("%d * %d=%2d\t", j, i, i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}