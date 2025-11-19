#pragma once
#define ROW 9
#define COL 9
#define COLS COL+2
#define ROWS ROW+2
//函数的声明
//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//打印棋盘
void DisplayBoard(char board[ROW][COL], int rows, int cols);
//布置雷
void SetMine(char mine[ROW][COL], int row, int col);
//排查雷
void FindMine(char mine[ROW][COL], char show[ROW][COL], int row, int col);