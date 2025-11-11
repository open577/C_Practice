#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i;
	printf("请输入你要打印的行数:");
	scanf("%d", &i);
	int a = 0;
	for (a = 0; a < i; a++)
	{
		int k = 0;
		for (k = 0; k < i; k++)
		{
			if (a == k || a + k == i - 1)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
	return 0;
}