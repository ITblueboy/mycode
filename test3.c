#include<stdio.h>
#include<windows.h>

int main()
{
	int line = 1;
	int row =1;
		for (line=1; line <= 9; line++)
		{
			for (row=1; row<= line;row++)
			{
				printf("%d*%d=%d\t", row, line, line*row);
			}
			printf("%\n");
		}
	
	system("pause");
	return 0;
}