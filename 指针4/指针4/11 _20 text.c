#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
int main()
{
	int begin = clock();
	//指针数组（存放指针的数组）
	int a = 10;
	int b = 100;
	int c = 1000;
	int *arr[3] = { &a,&b,&c };
	printf("%d %d %d\n", *arr[0],*arr[1],*arr[2]);
	//指针模仿二维数组
	int arr1[] = { 1,2,3 };
	int arr2[] = { 4,5,6 };
	int arr3[] = { 7,8,9 };
	int* arr4[] = { arr1,arr2,arr3 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)

		{
			printf("%d ", arr4[i][j]);
		}printf("\n");
	}
	printf("\n");
	//字符指针变量
	char* ch = "dfghjkl";
	char* ch0 = "dfghjkl";
	for (int i = 0; i < sizeof(ch); i++)
	{
		printf("%c ", ch[i]);
	}printf("\n");
	printf("%c\n", ch[0]);
	printf("%c\n", ch[5]);
	printf("字符串的最后一个元素是：%c————\n", ch[8]);
	const char* ch1 = "hello";
	const char* ch2 = "hello";
	char* ch3 = "world";
	char* ch4 = "worldf";
	printf("ch1的地址是%p\n", ch1);
	printf("ch2的地址是%p\n", ch2);
	printf("ch3的地址是%p\n", ch3);
	printf("ch4的地址是%p\n", ch4);
	printf("ch的地址是%p\n", ch);
	printf("ch0的地址是%p\n", ch0);
	int w = 1;
	int f = 1;
	printf("%p\n", &w);
	printf("%p\n", &f);
	//数组指针变量
	int arr5[10] = { 0 };
	int(*pa)[10] = &arr5;//指向数组的指针
	

	int end = clock();
	printf("%d\n", end - begin);
	return 0;
}