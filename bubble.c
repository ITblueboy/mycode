#include<stdio.h>
#include<windows.h>


void bubble(int arr1[], int len)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			if (arr1[j] > arr1[j + 1])
			{
				int tmp = arr1[j];
				arr1[j] = arr1[j+1];
				arr1[j+1] = tmp;
			}
		}
	}
	for (int i = 0; i < len; i++)
	{
		printf("%d\t", arr1[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 5, 6, 4, 2, 8, 9, 7, 3, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, sz);
	
	system("pause");
	return 0;
}