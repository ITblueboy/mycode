#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>


void count(int n)
{
	int sum = 0;
	for (int i = 0; i < 32; i++)
	{
		if (((n >> i) & 1 )== 1)
		{
			sum++;
		}
	}
	printf("%d", sum);
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	count(num);
	system("pause");
	return 0;
}