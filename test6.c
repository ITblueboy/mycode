#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<math.h>

int main()
{
	int a = 0;
	int n = 0;
	scanf("%d,%d", &a, &n);
	int sum = 0;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a*pow(10, i);
		count += sum;
	}
	printf("%d", count);
	system("pause");
	return 0;
}
