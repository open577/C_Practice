#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<time.h>
#include"game.h"

//extern InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
//{
//	int i = 0;
//	for (i = 0; i < rows; i++)
//	{
//		int j = 0;
//		for (j = 0; j < cols; j++)
//			board[i][j] = set;
//	}
//}
void menu()
{
	printf("*****************************\n");
	printf("*****************************\n");
	printf("***0.exit***********1.play***\n");
	printf("*****************************\n");
	printf("*****************************\n");



}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	printf("\n");
	printf("\n");
	printf("\n");
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	
	//DisplayBoard(mine, ROW, COL); // 查看布置雷的情况
	//排查雷(在mine函数中布置，在show函数中查找）
	FindMine(mine,show,ROW,COL);

}
//游戏逻辑
int main()
{
	srand((unsigned int) time(NULL));
	int inpute = 0;
	do
	{
		menu();
		printf("请选择");
		scanf("%d", &inpute);
		switch (inpute)
		{
		case 1:
			printf("开始扫雷\n");
			game();
			break;
		case 0:

			break;
		default:
			printf("请输入正确的数字\n");
			break;
		}
		
	} while (inpute);

	return 0;
}