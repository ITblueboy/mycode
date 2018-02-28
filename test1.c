#include<stdio.h>
#include<Windows.h>
#include<math.h>

int main()
{
	for (int j = 1; j <= 100; j++)
	{
		for (int i = 2; i <= sqrt(j); i++)
		{
			if (j%i == 0)
			{

			}
			printf("%d\t", j);
		}
	}
	system("pause");
	return 0;
}