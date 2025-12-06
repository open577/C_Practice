
#define _CRT_SECURE_NO_WARNINGS 1
//小明决定从下周一开始努力刷题准备蓝桥杯竞赛。他计划周一至周五每天 做
//a 道题目, 周六和周日每天做b 道题目。请你帮小明计算, 按照计划他将在 第几天实现做题数大于等于题 ?
//
//输入格式
//输入一行包含三个整数
//a, b 和n
//
//输出格式
//输出一个整数代表天数。
#include<stdio.h>

int main()
{
	long long a, b,n;
	scanf("%lld %lld %lld",&a,&b,&n);
	long long sum = a * 5 + b * 2;
	long long weeks = n / sum;
	long long yu = n % sum;
	long long zong = weeks * 7;
	 
	if (yu > a * 5 && yu <= 5 * a + b)

	printf( "%lld",zong+6);
	else if (yu > 5 * a + b && yu < 5 * a + 2 * b)
		printf("%lld",zong+7);
	else if (yu <= 5 * a && yu % a == 0)
		printf("%lld", zong+yu / a);
	else if (yu <= 5 * a && yu % a != 0)
		printf("%lld",zong+yu / a + 1);
	return 0;
}
