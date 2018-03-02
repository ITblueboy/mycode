#include<stdio.h>
#include<windows.h>
#include<assert.h>


char *mystrcat(char *dest, char *src, size_t sum)
{
	assert(dest);
	assert(src);
	while (sum)
	{
		if (*dest == NULL)
		{
			*dest = *src;
			dest++;
			src++;
			sum--;
		}
		else
		{
			dest++;
		}
	}
	*dest = '\0';
	return dest;
}
int main()
{
	char arr1[30] = "I am";
	char arr2[] = "a student";
	size_t len = sizeof(arr2) / sizeof(arr2[0]);
	mystrcat(arr1, arr2, len);
	puts(arr1);
	system("pause");
    return 0;
}