#include<stdio.h>
#include<Windows.h>

int main()
{
	int i = 1;
	int j = 1;
	int sum = 1;
	for (i = 1; i <10; i++)
	{
		j = (j + 1) * 2;
		sum += j;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}