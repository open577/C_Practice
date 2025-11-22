#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//将一个数组中的0移动到最后面，其他元素顺序不变，置于前面（不能创建新数组）
int main()
{
	//冒泡排序思想   
	//int arr[10] = { 1,2,5,8,9,0,4,0,5,6 };
	int arr[15] = { 1,2,5,8,9,0,4,0,5,6,4,4,0,89,6, };

	int begin = -1;
	int first = 0;
	for (int j = 0; j < sizeof(arr) / sizeof(arr[1]) - 1; j++)
	{
		for (first = 0; first < sizeof(arr) / sizeof(arr[1]) - 1; first++)
		{
			if (arr[first] == 0)
			{
				int a = arr[first + 1];
				arr[first + 1] = arr[first];
				arr[first] = a;
			}
		}
	}
	for (int i = 0; i < sizeof(arr) / sizeof(arr[1]); i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}