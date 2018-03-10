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
		printf("Ð¡¶Ë\n");
	}
	else
	{
		printf("´ó¶Ë\n");
	}
	system("pause");
	return 0;
}
