#include<stdio.h>
#include <windows.h>
//int main()
//{
//	//// 代码1：带\n，会立刻输出hello bite!，然后sleep 3秒
//	//printf("hello bite!\n");
//	//Sleep(3);
//
//	//// 代码2：不带\n，会先sleep 3秒，再一次性输出hello bite!
//	//printf("hello bite!");
//	//Sleep(3);
//
//	//// 代码3：不带\n但用fflush，会立刻输出hello bite!，然后sleep 3秒
//	//printf("hello bite!");
//	//Sleep(3);
//	//fflush(stdout); // 强制刷新缓冲区
//	
//	printf("hello\n");
//	system("pause");
//
//	printf("hello\r");
//	//system("pause");
//	return 0;
//
//}

//100秒倒计时
int main()
{
	int time = 100;
	while (time >= 0)
	{
		printf("%-3d\r", time);
		Sleep(1000);
		time--;
	}
	printf("\n");
	return 0;
}