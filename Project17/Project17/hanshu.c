#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int MAX(int x,int y,int z)
{
	if (x >= y && x >= z)
		return x;
	else if (y >= x && y >= z)
		return y;
	else
		
	return z;

}
int main()
{
	int a, b, c;
	printf("请输入三个数字：");
	scanf("%d %d %d", &a, &b, &c);
	int d = MAX(a, b, c);
	printf("%d", d);
	return 0;
}