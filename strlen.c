#include<stdio.h>
#include<Windows.h>
#include<assert.h>

int mystrlen(char *p)
{
	assert(*p);
	if (*p == 0) 
	{
		return 0;
	}
	return 1 + strlen(p + 1);
}
int main()
{
	char arr[] = "qwertyuiop";
	printf("%d\n",mystrlen(arr));
	system("pause");
	return 0;
}