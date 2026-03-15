#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int COUNT()
{
	srand((unsigned int)time(NULL));
	return rand() % 100 + 1;
}
int main()
{
	printf("欢迎来到猜数字游戏（数字在1--100之间）\n");
	int count = COUNT();
	int times = 10;
	printf("只有%d次机会\n", times);
	while (times)
	{
		int a;
		printf("请输入你猜的数据(还有%d次机会)：",times);
		scanf("%d", &a);
		if (a > count)
			printf("猜大了\n");
		if (a < count)
			printf("猜小了\n");
		if (a == count)
		{
			printf("恭喜你猜对了\n");
			break;
		}
		times--;
	}
	return 0;

}
