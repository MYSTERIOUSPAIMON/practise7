#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//冒泡排序法

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int x = 0;
		int flag = 1;//判定有无发生交换
		for (x = 0; x < sz - 1 - i; x++)
		{
			if (arr[x] > arr[x + 1])
			{
				int tmp = arr[x];
				arr[x] = arr[x + 1];
				arr[x + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)//只进行比较而不交换
		{
			break;
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);

	return 0;
}