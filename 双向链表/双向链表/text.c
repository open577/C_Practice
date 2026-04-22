#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//创建双向链表的节点
typedef struct ListNode
{
	struct ListNode* prev;
	int data;
	struct ListNode* next;
	
}LTNode;
//尾插


LTNode* LTBuyNode(int x)
{
	LTNode* node = (LTNode*)malloc(sizeof(LTNode));
	if (node==NULL)
		assert(malloc);
	node->data = x;
	node->next = node->prev = node;
	return node;
}
//创建哨兵位
void LTInit(LTNode** pphead)
{
	*pphead = LTBuyNode(-1);
}
//尾插
void LTPushBack(LTNode* phead, int x)
{
	assert(phead);//哨兵位不能为空
	LTNode* newnode = LTBuyNode(x);//申请节点
	newnode->prev = phead->prev;
	newnode->next = phead;
	phead->prev->next = newnode;
	phead->prev = newnode;
}
//打印链表
void LTPrint(LTNode* phead)
{
	LTNode* pcur = phead->next;
	while (pcur!=phead)
	{
		printf("%d->", pcur -> data);
		pcur = pcur->next;
	}
	printf("\n");
}
//链表尾删
void LTPopBack(LTNode* phead)
{
	assert(phead && phead->next != phead);
		LTNode* del = phead->prev;
		del->prev->next = phead;
		phead->prev = del->prev;
		free(del);
		del = NULL;
}
//查找
LTNode* LTFind(LTNode* phead,int x)
{
	LTNode* pcur = phead;
	while (phead->next != phead)
	{
		if (pcur->data == x)
			return pcur;
		pcur = pcur->next;
	}
	return NULL;
}
//pos后面插入数据
void LTInsert(LTNode* pos, int a)
{
	assert(pos);
	LTNode* newnode = LTBuyNode(a);
	newnode->next = pos->next;
	newnode->prev = pos;
	pos->next->prev = newnode;
	pos->next = newnode;
}
int main()
{
	LTNode* plist = NULL;
	LTInit(&plist);//哨兵位
	//尾插
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	//打印链表内容
	LTPrint(plist);
	//链表尾删
	LTPopBack(plist);
	LTPrint(plist);
	//查找节点数据
	LTNode*pos=LTFind(plist,2);
	//在pos后面插入数据
	LTInsert(pos, 7);
	LTPrint(plist);
	return 0;
}