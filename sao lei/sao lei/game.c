#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "game.h"
#include<stdlib.h>
#include<time.h>
#define EASY_COUNT 10//雷的个数
static int get_mine_count(char mine[ROW][COL], int x, int y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x][y - 1] + mine[x][y + 1] +
		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y +1] - 8 * '0';
}
//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
			board[i][j] = set;
	}
}
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	printf("-------扫雷-------\n");
	int i = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		int j = 0;
		printf("%d ",i);
		for (j = 1; j <=col; j++)
		{

			printf("%c ", board[i][j]);
		}
		printf("\n");
	}


}
//布置雷
void SetMine(char board[ROW][COL], int row, int col)
{
	int count = EASY_COUNT;
	//雷的坐标
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}

}


//排查雷
void FindMine(char mine[ROW][COL], char show[ROW][COL], int row, int col)
{
	int x= 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("请输入你要排查的坐标：\n");
	
		
		scanf("%d %d", &x, &y);
		if (x>=1 && x<=row && y>=1 && y<=col)
		{

			if (show[x][y] == '*')
			{
				if (mine[x][y] == '1')
				{
					printf("很遗憾，你被炸死了，游戏结束\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else
				{
					//统计show数组周围有几个雷
					int count = get_mine_count(mine, x, y);
					//打印输入的坐标周围有几个雷
					show[x][y] = count + '0';
						DisplayBoard(show, ROW, COL);
						win++;
				}
			}
			else
			{
				printf("不好意思，该坐标已经被排查过了\n");

			}
	
		}
		
		else
		{
			printf("请输入正确的坐标！！！");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, ROW, COL);

	}
		
}