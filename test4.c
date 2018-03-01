#include<stdio.h>
#include<windows.h>


int main()
{
	int count = 0;
	int num = 0;
	for (num = 1; num < 100; num++)
	{
		if (num % 10 == 9)
			count++;

		if ((num / 10 == 9) && (num % 10 != 9))
			count++;
	}
	
	printf("%d\n",count);
	system("pause");
	return 0;
}