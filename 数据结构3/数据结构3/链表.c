#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
//单链表的定义(数据+指向下一个节点的指针)
typedef struct SlistNode
{
	int data;
	struct SlistNode* next;
}SLTNode;
//打印节点数据
void PRINT(SLTNode* head)
{
	SLTNode* pucr = head;
	while (pucr)
	{
		printf("%d->", pucr->data);
		pucr = pucr->next;
	}
	printf("NULL");
}
//判断空间是否申请成功
void CHECK(SLTNode* ps,int a)
{
	if (ps == NULL)
		perror("malloc");
	else
	{
		ps->data = a;
		ps->next = NULL;
	}
}
//尾插
void PUSHBACK(SLTNode** pb, int b)
{
	//判断首链表是否为空
	assert(pb);
	//申请新空间
	struct SlistNode* newnode = (struct SlistNode*)malloc(sizeof(SLTNode));

	if (*pb == NULL)
	{
		*pb = newnode;
		CHECK(newnode, b);

	}
	//找尾
	else
	{
		CHECK(newnode, b);
		SLTNode* ptail = *pb;
		while (ptail->next)
		{
			ptail = ptail->next;
		}
		ptail->next = newnode;
		//printf("%d", newnode->data);
	}
}
int main()
{
	//struct SlistNode;
	struct SlistNode SLTNode;
	//创建链表节点+赋值
	struct SlistNode* node1 = (struct SlistNode*)malloc(sizeof(SLTNode));
	CHECK(node1,1);
	struct SlistNode* node2 = (struct SlistNode*)malloc(sizeof(SLTNode));
	CHECK(node2,2);
	struct SlistNode* node3= (struct SlistNode*)malloc(sizeof(SLTNode));
	CHECK(node3,3);
	struct SlistNode* node4= (struct SlistNode*)malloc(sizeof(SLTNode));
	CHECK(node4, 4);
	struct SlistNode* node5 = (struct SlistNode*)malloc(sizeof(SLTNode));
	CHECK(node5, 5);
	//节点地址链接
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;
	node5->next = NULL;
	//打印节点数据
	PRINT(node1); printf("\n");
	//链表尾插
	struct SlistNode* plist = NULL;
	PUSHBACK(&plist,6);
	
	PUSHBACK(&plist,5);
	
	PUSHBACK(&plist,4);
	
	PUSHBACK(&plist,3);
	
	PUSHBACK(&plist,2);
	
	PUSHBACK(&plist,1);
	PRINT(plist);
	
	return 0;
}