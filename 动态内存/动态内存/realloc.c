#include<stdio.h>
#include<stdlib.h>
//realloc内存分配（异地扩容，原地扩容）
//返回的地址可能是新的地址，也可能是malloc申请的地址
//不同时间，不同编译器分配情况不一样
//若返回的地址相同，则为原地扩容，否则为异地扩容
int main()
{
	int* pf = (int*)malloc(8);
	int* ps = (int*)realloc(pf, 10);
	printf("%p\n", pf);
	printf("%p\n", ps);
	return 0;
}