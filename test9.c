#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 1;
	int j = 1;
	int sum = 0;
	if (n == 1 || n == 2)
	{
		sum = 1;
	}
	while (n - 2 > 0)
	{
		sum = i + j;
		i = j;
		j = sum;
		n--;
	}

	printf("%d", sum);
	system("pause");
	return 0;
}