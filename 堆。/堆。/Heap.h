#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
typedef int HPDataType;
//节点定义
typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}HP;
//初始化
void HPInit(HP* php);
//销毁
void HPDestroy(HP* php);
//插入数据
void  HPPush(HP* php, HPDataType x);
//向上调整
void AdjustUp(HPDataType* a, int child);
//向下调整
void AdjustDown(HPDataType* a, int n, int parent);
//删除顶部元素
void HPPop(HP* php);
//堆顶元素
HPDataType HPTop(HP* php);
//判空
bool HPEmpty(HP* php);
//打印
void Print(HP* php);