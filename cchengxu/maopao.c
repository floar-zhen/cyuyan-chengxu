#include <stdio.h>
void bubble_sort(int arr[],int sz)
{
	
	int i = 0;
	for (i = 0; i<sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j<sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int i;
	int arr[] = { 3, 1, 7, 5, 8, 9, 0, 2, 4, 6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);//是否可以正常排序？
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}