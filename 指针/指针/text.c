#include<stdio.h>
int main()
{
	int a = 0;
	int c = 1;
	int* b = &a;
	printf("%p\n", &a);
	printf("%p\n", &c);
	printf("%d\n", *b);
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(arr+i));//arr+i(指针偏移量)
	}
	printf("\n");
	//指针类型不同，操作之后也不同
	int s = 0x11223344;
	char* j = &s;
	*j = 0;
	printf("%x\n", s);//小端存储，所以结果为11223300
	//void*指针
	char ch = 'w';
	void* e = &ch;
	   //强制类型转换
	printf("%c\n", *(char*)e);
	//指针减指针
	int arr1[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int* p = &arr;
	int* o = &arr[10];
	printf("%td\n", o - p);
	//指针的关系运算
	int arr2[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int* u = &arr2;
	size_t sz = sizeof(arr2) / sizeof(arr2[1]);
	
	while (u < &arr2[0] + sz)
	{
		printf("%d ", *u);
		u++;
	}
	printf("\n");
	//修改指针指向的元素
    const int y = 1;
	int* k = &y;
	*k = 2;
	printf("%d\n", y);//y被修改

	return 0;
}