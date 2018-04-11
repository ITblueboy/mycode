#include<stdio.h>
#include<Windows.h>

int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		m++;
		break;
	}
	printf("%d,%d\n", n, m);
	system("pause");
	return 0;
}