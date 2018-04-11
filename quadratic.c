#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
#include<math.h>

void Quadratic(int a, int b, int c)
{
	if (a != 0)
	{
		int tmp = b*b - 4*a*c;
		printf("%d\n", tmp);
		if ( tmp> 0)
		{
			printf("%f,%f\n", (-b + sqrt((double)tmp)) / (2 * a), (-b - sqrt((double)tmp)) / (2 * a));
		}
		else if (tmp == 0)
		{
			printf("%f\n", (-b + sqrt((double)tmp)) / (2 * a));
		}
		else
		{
			printf("ц╩сп╫Б\n");
		}
	}
	return;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d,%d,%d", &a, &b, &c);
	Quadratic(a, b, c);
	system("pause");
	return 0;
}