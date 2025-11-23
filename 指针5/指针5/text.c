#include<stdio.h>
void print(int(*p)[5], int x, int y)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < y; j++)
		{
			printf("%d ", *(*(p + i) + j));//第一次解引用得到数组地址，再次解引用得到数组元素
		}
	}
	printf("\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < y; j++)
		{
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
int ave(int x, int y)
{
	return y/x;
}
int add(int a, int b)
{
	return a + b;
}
int main()
{
	//数组指针
	int arr[3][5] = { {1,2,3,9,6},{4,5,6,5,5},{7,8,9,5,5} };
	print(arr, 3, 5);
	//函数指针
	int a1 = 100, a2 = 666;
	int(*pa)(int, int) = add;
	int f =pa(a1, a2);
	printf("%d\n",f);
	printf("\n");
	int(*pf)(int, int);
	pf = add;
	int c = pf(5, 6);
	printf("%d\n", c);
	//函数指针数组
	int(*pd[2])(int ,int) = {add,ave};
	int r = pd[0](a1, a2);
	int t = pd[1](a1, a2);
	printf("%d\n", r);
	printf("%d\n", t);
	return 0;
}