//二分查找
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void CONCLUDE(int arr[], int a,size_t c)
{
	int left = 0;
	int right = 9;
	int mid = c / 2;
	int d = 0;
	for (int i = 0;i<=c; i++)
	{
		if (a < arr[mid])
		{

			right = mid - 1;
			mid = (left + right) / 2;
		}
		else if (a > arr[mid])
		{
			left = mid + 1;
			mid = (left + right) / 2;
		}


		else
			d = mid;
		
	}
	printf("%d", d);
	
	
}
		
		
	
	
	


int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	
	printf("请输入你要查找的数字（在0-9之间）：");
	int a;
	scanf("%d", &a);
	size_t c = sizeof(arr)/sizeof(arr[0]);
	CONCLUDE(arr, a,c);
	
	return 0;
}