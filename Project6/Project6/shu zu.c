#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//打印菱形
void PRINT(int a)
{
	
	for (int i = 0; i < a; i++)
	{
		//打印空格的上半部分
		for (int b = 0; b < a - i; b++)
		{
			printf(" ");
		}
		//打印*（上半部分）
		for (int c = 0; c < 2 * i - 1; c++)
		{
			printf("*");
		}printf("\n");
	}

	//处理下半部分
	for(int i=0;i<a-1;i++)
	{
		//打印空格
		for (int j = 0;j<i+1;j++)
		{
			printf(" ");
		}
		//打印*
		for (int k = 0; k < (a - 1 - i)*2-1; k++)
		{
			printf("*");
		}printf("\n");

		
	}

}
int main()
{
	//输入要打印的行数
	printf("请输入你要打印的行数：");
		int a;
	scanf("%d", &a);
	PRINT(a);
	return 0;
}


////喝汽水问题
////一瓶汽水一元，两个汽水瓶可以
////一瓶汽水一元，两个汽水瓶可以兑换一瓶汽水.问:输入n元，最终可以喝上几瓶汽水
//int main()
//{
//	//输入金额
//	int a;
//	printf("一瓶汽水一元，两个汽水瓶可以兑换一瓶汽水\n");
//	printf("请输入你要消费的金额：");
//	scanf("%d", &a);
//	int b = a / 1;
//	int c = b;//直接购买的瓶数
//	int sum = 0;
//	int j = 0;
//	int count = 0;
//	while (b)//兑换的瓶数
//	{
//		
//		if (b % 2 != 0)
//		{
//			
//			j++;
//			if (j == 2)
//			{
//				count++;
//			}
//		}
//		b /= 2;
//		
//
//		 sum += b;
//
//	}
//	int total = sum + c + count;
//	printf("最终能够喝到%d瓶汽水。", total);
//	return 0;
//}


//数组 函数
////正序打印数组元素
//void PRINT_ARR(int arr[], size_t a)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}
////逆序打印数组元素
//void OP_ARR(int arr[], size_t a)
//{
//	int left = 0;
//	int right = 9;
//	while (left < right)
//	{
//		int c = arr[left];
//		 arr[left] = arr[right];
//		 arr[right] = c;
//		 left++;
//		 right--;
//		 
//	}
//}
//int main()
//{
//	int arr[10] = { 0 ,1,2,3,4,5,6,7,8,9};
//	size_t a = sizeof(arr) / sizeof(arr[2]);
//	PRINT_ARR(arr, a);
//	printf("\n");
//	OP_ARR(arr, a);
//	PRINT_ARR(arr, a);
//	printf("\n");
//	printf("%d", (int)1e4);
//	
//
//	return 0;
//}
//	
//	