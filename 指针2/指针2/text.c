#include<stdio.h>
#include<assert.h>
static int * test()
{
	int d = 100;
	return &d;
}
int main()
{
	//const修饰
	int m = 10;
	int c = 11;
	const int* a = &m;
	//(报错)*a = 2;
	//在int左边，限制了指针指向的内容，不能被修改
	a = &c;
	printf("%d\n", *a);
	//在int右边，限制指针，而指针指向的内容可以被修改
	int* const b = &m;
	//b = &c;(报错)
	*b = 0;
	printf("%d %d\n", *b, m);
	//指针指向的空间释放
	int* p = test();
	printf("%d\n", *p);
	//NULL
	int num = 100;
	int* p1 = &num;
	int* p2 = NULL;
	//*p2 = 101;
	printf("%d \n", *p1);
	int e = 1021;
	int* f = &e;
	assert(f != NULL);
	{
		printf("好\n");

	}
	//f = NULL;
	//assert(f != NULL);
	
	return 0;
}