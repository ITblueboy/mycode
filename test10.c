#include<stdio.h>
#include<windows.h>


int main()
{
	int i = 1;
	int sum = 1;
	int count = 0;
	for (i = 1; i <= 20; i++)
	{
		sum = sum*i;
		count += sum;
	}
	printf("%d", count);
	system("pause");
	return 0;
}