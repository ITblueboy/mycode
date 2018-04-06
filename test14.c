#include<stdio.h>
#include<windows.h>

int main()
{
	int fnum = 3;
	int snum = 5;
	int bnum = 0;
	if (fnum > snum)
		bnum = fnum;
	else
		bnum = snum;
	printf("%d\n", bnum);
	system("pause");
	return 0;
}