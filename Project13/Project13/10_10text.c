#define CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("%zu\n", sizeof(int));
	unsigned int a = 100;
	printf("%u\n", a);
	printf("%d\n", 6 / 3);
	printf("%f\n", 6 / 4);//不能得到小数
	printf("%f\n", 6.0 / 4);//若要得到小数，两个操作数至少有一个浮点型数
	printf("%d\n", 6 % 4);//取余
	//负数取余
	printf("%d\n", -6 % 4);
	printf("%d\n", 6 %- 4);
	printf("%.3f\n", 1.0 / 8);
	int b = 10;
	int d=0;
	b++;
	printf("%d\n", b);//11
	b += 3;
	printf("%d\n", b);//14
	int c = 10;
	printf("%d\n", d++);//0
	printf("%d\n", ++d);//1
	printf("%d\n", (int)3.14);
	printf("%12f\n", 123.456);
	printf("%-12.2f--\n", 123.456);
	char* ahr= "abcdefgh";
	printf("%.5s\n",ahr);
	printf("%.5s\n","abcdefgh");
	return 0;
}