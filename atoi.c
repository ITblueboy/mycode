#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>


int flag = 1;
int main()
{
	char s[100] = { 0 };
	gets(s);
	char* p = s;
	int num = 0;
	char str1[1] = { '-' };
	int len = strlen(s);
	while (len)
	{
		num *= 10;
		if (strncmp(p, str1, 1) == 0)
		{
			flag = -1;
			len--;
			p++;
		}
		num = (*p) - '0' + num;
		p++;
		len--;
	}
	num = num*flag;
	printf("%d", num);
	system("pause");
	return 0;
}
