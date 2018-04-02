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
	printf("第10次反弹高度：%d\n", t);
	printf("共经过：%d米\n", sum);
	system("pause");
	return 0;

}