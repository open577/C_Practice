//基于于顺序表实现
#include"Stack.h"
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
STDataType STTop(ST* pst)
{
	assert(pst&&pst->top);
	return pst->a[pst->top - 1];
}
//出栈
void STPop(ST* pst)
{
	assert(pst&&pst->top>0);
	pst->top--;
	
}
//初始化
void STInit(ST*pst)
{
	pst->a = NULL;
	pst->top = 0;//指向栈顶的下一个元素
	pst->capacity = 0;
}
//入栈
void STPush(ST* pst,int x)
{
	
	assert(pst);
	//判断并申请内存
	if (pst->top == pst->capacity)
	{
		//扩容
		int newcapacity = pst->capacity == 0 ? 4 : 2 * pst->capacity;
		STDataType* tmp = (STDataType*)realloc(pst->a, newcapacity * sizeof(STDataType));
		if (tmp ==NULL)
		{
			perror("realloc fail!");
			exit(1);
		}
		//插入数据
		pst->a = tmp;
		pst->capacity = newcapacity;
		
	}
	pst->a[pst->top] = x;
	pst->top++;
}
//打印元素
void STPrint(ST* pst)
{
	assert(pst);
	for (int i = 0; i < pst->top; i++)
	{
		printf("%d ", pst->a[i]);
	}
	printf("\n");
}
int main()
{
	struct Stack ST;
	//初始化
	STInit(&ST);
	//入栈
	STPush(&ST,1);
	STPush(&ST,2);
	STPush(&ST,3);
	//打印栈中的元素
	STPrint(&ST);
	//出栈（不代表删除元素）
	STPop(&ST);
	STPrint(&ST);
    //取栈顶的元素
	int top=STTop(&ST);
	printf("%d\n", top);
	return 0;
}