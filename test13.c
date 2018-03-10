#include<stdio.h>
#include<Windows.h>

int main()
{
	int m = 0;
	int n = 0;
	printf("请输入两个数\n");
	scanf("%d,%d", &m, &n);
	int p = m*n;
	if (m <= n);
	{
		int tem = n;
		n = m;
		m = tem;
	}
	
	while (n != 0)
	{
		int r = m%n;
		m = n;
		n = r;
	}
	printf("%d", p/m);
	system("pause");
	return 0;
}