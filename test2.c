#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>


int fun(int sum)
{
	if (sum==1||sum==2)
	{
		return 1;
	}
	return fun(sum - 1) + fun(sum - 2);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int num = fun(n);
	printf("%d", num);
	system("pause");
	return 0;
}