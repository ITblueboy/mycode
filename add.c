
#include<stdio.h>
#include<Windows.h>

int recur(int input)
{
	if (input < 1)
	{
		return 1;
	}
	return input + recur(input - 1);
}
int main()
{
	int num = 10;
	printf("%d", recur(num));
	system("pause");
	return 0;
}