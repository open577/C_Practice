#include"Snake.h"
//绘制地图
void CreatMap()
{
	//上
	int i = 0;
	for (i = 0; i < 29; i++)
	{
		wprintf(L"%lc",L'□');
	}
	//下
	SetPos(2, 24);
	for (i = 0; i < 28; i++)
	{
		wprintf(L"%lc", L'□');
	}
	//左
	for (i = 1; i < 25; i++)
	{
		SetPos(0, i);
		wprintf(L"%lc", L'□');
	}
    //右
	for (i = 1; i < 25; i++)
	{
		SetPos(56, i);
		wprintf(L"%lc", L'□');
	}
	system("pause");
}
//代码实现
void WelCome()
{
	SetPos(40, 13);
	wprintf(L"欢迎来到贪吃蛇游戏\n");
	SetPos(40, 15);
	system("pause");
	system("cls");//刷新屏幕
	SetPos(25, 14);
	wprintf(L"用←.↑.→.↓来控制蛇的移动，F3加速，F4减速\n");
	SetPos(25, 15);
	wprintf(L"加速可以获得更高的分数\n");
	SetPos(25, 16);
	system("pause");
	system("cls");
}
//光标定位
void SetPos(int x, int y)
{
	//获取标准输出设备的句柄
	HANDLE houtput = GetStdHandle(STD_OUTPUT_HANDLE);
	//定位光标
	COORD pos = { x,y };
	SetConsoleCursorPosition(houtput, pos);
}
void GameStart(Snake*psnake)
{
	//设置窗口大小
	system("mode con cols=100 lines=30");
	system("title 贪吃蛇");
	//隐藏光标
	HANDLE houtput = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(houtput, &CursorInfo);//获取控制台光标信息
	CursorInfo.bVisible = false;//隐藏控制台光标
	SetConsoleCursorInfo(houtput, &CursorInfo);
	//打印环境界面
	//功能介绍
	WelCome();
	//绘制地图
	CreatMap();
	//创建蛇
	//创建食物
	//设置游戏相关信息
}
