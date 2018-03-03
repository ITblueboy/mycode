#include<stdio.h>  
#include<Windows.h>
#include<assert.h>  
void rank(int arr[], int len)
{
	assert(arr);
	int i = 0;
	int j = 0;
	int temp = 0;
	for (i = 0; i < len - 1; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			if (arr[i] >arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main()
{
	int array[] = { 4,8,7,6,2,1,5,3,9,0 };
	int len = sizeof(array) / sizeof(array[0]);
	int i = 0;
	rank(array, len);
	for (i = 0; i < len; i++)
	{
		printf("%d", array[i]);
		printf(" ");
	}
	system("pause");
	return 0;
}
