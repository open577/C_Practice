//函数声明
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<stdbool.h>
#include<locale.h>
//蛇的方向
enum DIRECTION
{
	UP=1,
	DOWN,
	LEFT,
	RIGHT,
};
//蛇的状态
enum GAME_STATUS
{
	OK,//正常
	KILL_BY_WALL,//撞墙
	KILL_BY_SELF,//撞到自己
	END_NORMAL,//正常退出
};
//创建蛇的身体
typedef struct SnakeNode
{
	//坐标
	int x;
	int y;
	struct SnakeNode* next;
}SnakeNode,*pSnakeNode;
//蛇的信息
typedef struct Snake
{
	pSnakeNode _pSnake;//指向蛇头的指针
	pSnakeNode _pFode;//指向食物的指针
	enum DIRETION _dir;//蛇的方向
	enum GAME_STATUS _ststus;//蛇的状态
	int _food_weight;//一个食物的分数
	int _score;//总分数
	int _sleep_time;//休眠时间。时间越短，移动越快

}Snake;
//光标定位
void SetPos(int x, int y);
//测试
void text();
//游戏开始提示
void GameStart(Snake* psnake);
//欢迎界面
void WelCome();
//绘制地图
void CreatMap();