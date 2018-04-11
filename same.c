#include<stdio.h>
#include<string.h>
#include<Windows.h>

void GetSame( char src1[],char src2[])
{
	int sz1 = strlen(src1);
	int sz2 = strlen(src2);
	int i = 0;
	int j = 0;
	for (i=0; i < sz1; i++)
	{
		for (j=0; j < sz2; j++)
		{
			if (src1[i] == src2[j])
			{
				printf("%c\n", src1[i]);
			}
		}
	}
	return;
}
int main()
{
	char arr1[] = "abdcgehus";
	char arr2[] = "gxfetsudb";
	GetSame(arr1,arr2);
	system("pause");
	return 0;
}