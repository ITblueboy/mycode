#include <stdio.h>

int main()
{
	int i = 0;
	int num = 3;
	int count = 0;
	for (i = 0; i < 32; i++)//对于整数负数皆能得正确结果，但需循环32次
	{
		if ((num & 1) == 1)
		{
			count++;
		}
		num = num >> 1;
	}
	
	while (num)           //对于正数可以，负数得不到正确结果
	{
		if (num % 2 == 1)
		{
			count++;
		}
		num = num / 2;
	}
	while (num)          //正确而简洁的方法
	{
		count++;
		num = num&(num - 1);
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}