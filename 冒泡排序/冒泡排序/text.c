//冒泡排序
#include<stdio.h>
void PT_ARR(int arr[], int x)
{
	for (int i = 0; i < x; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	//从大到小排序
	int arr[10] = { 0,1,28,39,44,55,64,78,8,9 };
	for (int i = 0; i <= 9; i++)
	{
		for (int a = 0; a <= 9; a++)
		{
			if (arr[a] < arr[a + 1])
			{
				int b = arr[a];
				arr[a] = arr[a + 1];
				arr[a + 1] = b;

			}
		}
	}
	PT_ARR(arr, 10);
	return 0;
}