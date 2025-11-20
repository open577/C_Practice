#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//指针
//传值调用和传址调用
void add(int x, int y)
{
	printf("相加后的结果为：%d\n", x + y);
}
void change(int* pc, int* pd)
{
	printf("交换前：%d %d\n", *pc, *pd);
	int e = *pc;
	*pc = *pd;
	*pd = e;
	printf("交换后：%d %d\n", *pc, *pd);

}
int main()
{
	int a, b;
	printf("请输入两个数据，用空隔开：");
	scanf("%d %d", &a, &b);
	add(a, b);//传值
	//传址
	change(&a, &b);
	//数组
	int arr[10] = { 0 };
	int* p = arr;
	size_t f = sizeof(arr) / sizeof(arr[1]);
	for (int i = 0; i < f; i++)
	{
		scanf("%d", p + i);//数组名就是地址
	}
	for (int i = 0; i < f; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
	return 0;
}