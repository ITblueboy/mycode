#include <stdio.h>

int main()
{
	int i = 0;
	int num = 3;
	int count = 0;
	for (i = 0; i < 32; i++)//���������������ܵ���ȷ���������ѭ��32��
	{
		if ((num & 1) == 1)
		{
			count++;
		}
		num = num >> 1;
	}
	
	while (num)           //�����������ԣ������ò�����ȷ���
	{
		if (num % 2 == 1)
		{
			count++;
		}
		num = num / 2;
	}
	while (num)          //��ȷ�����ķ���
	{
		count++;
		num = num&(num - 1);
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}