#include<stdio.h>
#include<Windows.h>


int main()
{
	int m = 100;
	int n = 10;
	int t =  0;
	int i = 1;
	int sum = m;
	for (i = 1; i <= n; i++)
	{
		t = m / 2;
		sum += t * 2;
		m = t;
	}
	printf("��10�η����߶ȣ�%d\n", t);
	printf("��������%d��\n", sum);
	system("pause");
	return 0;

}