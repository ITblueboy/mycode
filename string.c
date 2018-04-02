#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<assert.h>


int mysubstr(char * dest, char *src, int start, int lenth)
{
	assert(dest);
	assert(src);
	int len = strlen(src);
	int count=0;
	printf("原字符串长度为%d\n", len);
	if (lenth > len)
	{
		return -1;
	}
	for (int i = 0; i < lenth; i++)
	{
		*(dest + i) = *(src + start + i);
	}
	while (*dest != 0)
	{
		count++;
		dest++;
	}
	return count;
}
int main()
{
	char arr[] = "adasgdasywdjasbd";
	char arr1[16] = { 0 };
	int sum = mysubstr(arr1, arr, 3, 5);
	printf("目标字符串长度为%d\n", sum);
	system("pause");
	return 0;
}