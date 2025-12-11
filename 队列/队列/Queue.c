#include"Queue.h"
//判空
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->size == 0;
}
//两个指针的初始化
void QueueInit(Queue* pq)
{
	pq->phead = NULL;
	pq->ptail = NULL;
	pq->size = 0;
}
//队尾插入
void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	//申请节点
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		perror("malloc fail!");
		exit(1);
	}
	//插入数据
	newnode->next = NULL;
	newnode->val = x;
	//处理指针
	if (pq->phead == NULL)
	{
		pq->phead = pq->ptail = newnode;
	}
	else
	{
		pq->ptail->next = newnode;//修改原指针指向节点的next的的位置
		pq->ptail = newnode;//修改指向队尾的指针的指向
	}
	pq->size++;
}
//打印元素
void QueuePrint(Queue* pst)
{
	assert(pst);
	assert(pst->phead);
	QNode* head = pst->phead;
	while (head)
	{
		printf("%d ", head->val);
		head = head->next;
	}
	
	printf("\n");
}
//队头删除
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->size != 0);
	assert(pq->phead!=NULL);
	//只有一个节点时
	if (pq->phead->next == NULL)
	{
		free(pq->phead);
		pq->phead = pq->ptail = NULL;
	}
	//多个节点时
	else
	{
		QNode* cur = pq->phead->next;
		free(pq->phead);
		pq->phead = cur;
	}
	pq->size--;
}
//头部数据
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(pq->phead);
	return pq->phead->val;
}
// 尾部数据
QDataType QueueBack(Queue * pq)
{
	assert(pq);
	assert(pq->ptail);
	return pq->ptail->val;
}
//队列元素个数
int QueueSize(Queue* pq)
{
	assert(pq);
	return pq->size;
}
int main()
{
	///*struct QueueNode*/ QNode;
	Queue p;// 定义两个指针，指向队头和队尾
	//初始化
	QueueInit(&p);
	//队尾插入
	QueuePush(&p,1);
	QueuePush(&p,2);
	QueuePush(&p,3);
	QueuePush(&p,4);
	QueuePush(&p,5);
	QueuePush(&p,6);
	QueuePush(&p,7);
	QueuePush(&p,8);
	QueuePush(&p,9);
	QueuePush(&p,10);
	QueuePrint(&p);
	//队头删除
	QueuePop(&p);
	QueuePrint(&p);
	//头部数据
	int data=QueueFront(&p);
	printf("%d\n", data);
	//尾部数据
	int data1 = QueueBack(&p);
	printf("%d\n", data1);
	//判空
	printf("%d",QueueEmpty(&p));
	return 0;
}