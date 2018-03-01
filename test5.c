#include<stdio.h>
#include<Windows.h>


int main()
{
	int i = 1, j = 1, k = 1;
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5; j++)
		{
			for (k = 1; k < 5; k++)
				{
					if (i!=j&&j!=k&&i!=k)
					printf("number=%d\t", i * 100 + j * 10 + k);
				}
		}
	}
	system("pause");
	return 0;
}