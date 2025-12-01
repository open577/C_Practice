#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#define  CI 10
void game()
{
	
	int b = rand() % 100 + 1;
	int guess = 0;
	
	int count = 10;
	while (count)
	{
		printf("你还有%d次输入机会\n", count);
		scanf("%d", &guess);
		if (guess <= 0)
			printf("不好意思，只能输入正数哦\n");
		else if (guess > 0 && guess < b)
			printf("猜小了\n");
		else if (guess > b)
			printf("猜大了\n");
		else
		{
			printf("猜的不错，正是%d\n", guess);
			break;
		}
		
		count--;
	}
	if (count == 0)
		printf("很遗憾，你失败了，正确答案是%d\n", b);
}
void menu()
{
	printf("************************\n");
	printf("************************\n");
	printf("********1.   play*******\n");
	printf("********0.   exit*******\n");
	printf("************************\n");
	printf("************************\n");
	printf("************************\n");
}
int main()
{
	int a;
	
	srand((unsigned int)rand(time));
	
	do
	{
		menu();
		
		printf("请输入你的选择>>\n");
		scanf("%d", &a);



		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("请输入正确的选择\n");
			
		}
	} while (a);
	
	return 0;
}