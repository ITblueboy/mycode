#include <stdio.h>
#include<Windows.h>

union UN
{
	int a;
	char c;
}uc;
int main()
{
	uc.a = 3;
	if (uc.c == 3)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	system("pause");
	return 0;
}
