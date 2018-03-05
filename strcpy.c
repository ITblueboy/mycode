#include<stdio.h>
#include<Windows.h>

char *mystrcpy(char *dest,char *src)
{
	while (*src != 0)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return dest;
}
int main()
{
	char arr1[] = "ahadgadffjfaw";
	int len = sizeof(arr1) / sizeof(arr1[0]);
	char arr2[20] = { 0 };
	mystrcpy(arr2, arr1);
	for (int i = 0; i < len; i++)
	{
		printf("%c", arr2[i]);
	}
	system("pause");
	return 0;
}