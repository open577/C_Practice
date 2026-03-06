#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define MaxSize 20//容量 
typedef struct
{
	char name[20];//姓名 
	int num;//物品数量
	char time[20];//用餐时间
	char number[20];//编号 
}user;
//显示
void Show(user user[], int* i)
{
	if (*i < 1)
	{
		printf("抱歉，没有数据");
		return;
	}
	int input = 0;
	for (input = 1; input <= (*i); input++)
	{
		printf("姓名：%s\n物品数量：%d\n用餐时间：%smin\n编号：%s\n", user[input].name, user[input].num, user[input].time, user[input].number);
		printf("\n");
		printf("\n");
	}

}
//修改
void Change(user user[], int* i)
{
	int find;
	printf("请输入你要修改的序号：");
	scanf("%d", &find);
	if (find > MaxSize || find > *i)
	{
		printf("无法进行修改！");
		return;
	}
	printf("请输入姓名：");
	scanf("%s", &user[find].name);
	printf("请输入用户用品数量：");
	scanf("%d", &user[find].num);
	printf("请输入用户用餐时间(min)：");
	scanf("%s", &user[find].time);
	printf("请输入用户编号：");
	scanf("%s", &user[find].number);
}
//删除
void Pop(user user[], int* i)
{
	printf("请输入你要删除的序号：");
	int pop;
	scanf("%d", &pop);
	if (pop > MaxSize || pop > *i)
	{
		printf("删除无效！");
		return;
	}
	if (*i == 1)
	{
		printf("删除成功");
		(*i)--;
		return;
	}
	else
	{

		int times = 0;
		for (times = pop; times <(*i); times++)
		{
			user[times] = user[times+1];
		}
		printf("删除成功");

		(*i)--;
	}
}
//查询
void Search(user user[])
{
	int input;
	printf("请输入你要查询的编号：");
	scanf("%d", &input);
	if (input > MaxSize)
	{
		printf("没有找到！");
		return;
	}
	printf("姓名：%s\n物品数量：%d\n用餐时间：%smin\n编号：%s\n", user[input].name, user[input].num, user[input].time, user[input].number);
}
//插入
void Insert(user user[], int* i)
{
	if (*i >= MaxSize)
	{
		printf("已满\n");
		return;
	}
	else
	{


		printf("请输入姓名：");
		scanf("%s", &user[++(*i)].name);
		printf("请输入用户用品数量：");
		scanf("%d", &user[(*i)].num);
		printf("请输入用户用餐时间(min)：");
		scanf("%s", &user[(*i)].time);
		printf("请输入用户编号：");
		scanf("%s", &user[(*i)].number);
	}
}
void Menu()
{
	printf("1.插入\n");
	printf("2.查询\n");
	printf("3.修改\n");
	printf("4.显示\n");
	printf("5.删除\n");
	printf("6.退出\n");
}
int main()
{
	Menu();
	user user[MaxSize + 1];
	int nowcapacity = 0;
	while (1)
	{
		int chioce;
		printf("请输入你的选择：");
		scanf("%d", &chioce);
		switch (chioce)
		{
		case 1:
		{
			Insert(user, &nowcapacity);
			break;
		}
		case 2:
		{
			Search(user);
			break;
		}
		case 3:
		{
			Change(user, &nowcapacity);
			break;
		}
		case 4:
		{
			Show(user, &nowcapacity);
			break;
		}
		case 5:
		{
			Pop(user, &nowcapacity);
			break;
		}
		case 6:
		{
			printf("感谢使用(~-~)");
			exit(1);
		}
		default:
			printf("输入错误！\n");
		}
	}
	return 0;
}