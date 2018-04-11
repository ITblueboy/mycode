#include<stdio.h>
#include<Windows.h>
int main()
{
	int i = 1;
	for (; i <= 100; i++)
	{
		if (i % 2 == 1)
		{
			printf("%d\t", i);
		}
	}
	system("pause");
	return 0;
}