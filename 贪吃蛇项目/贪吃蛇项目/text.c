#include"Snake.h"
//游戏测试逻辑
void text()
{
	//创建贪吃蛇
	Snake snake = { 0 };

	//初始化游戏
	GameStart(&snake);
	//打印环境界面
//功能介绍
//绘制地图
//创建蛇
//创建食物
//设置游戏相关信息
	//运行游戏
	//GameRun();
	//结束游戏-善后工作
	//GameEnd();
}
int main()
{
	//设置适配本地环境
	setlocale(LC_ALL, "");
	text();
	return 0;
}