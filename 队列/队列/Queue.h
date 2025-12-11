#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include<stdlib.h>
typedef int QDataType;
//定义队列节点（链表实现）
typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType val;
}QNode;
//定义两个指针，指向队头和队尾
typedef struct Queue
{
	QNode* phead;
	QNode* ptail;
	int size;
}Queue;
//两个指针的初始化
void QueueInit(Queue* pq);
//队尾插入
void QueuePush(Queue* pq, QDataType x);
//打印元素
void QueuePrint(Queue*pq);
//队头删除
 void QueuePop(Queue * pq);
//头部数据
 QDataType QueueFront(Queue * pq);
//尾部数据
 QDataType QueueFront(Queue* pq);
//队列元素个数
 int QueueSize(Queue* pq);
 //判空
 bool QueueEmpty(Queue* pq);