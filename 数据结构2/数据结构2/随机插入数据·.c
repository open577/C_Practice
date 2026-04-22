#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//动态顺序表
struct SeqList1
{
	int* arr;
	int size;
	int capacity;
}ST;
//动态顺序表初始化
void BEG1(struct SeqList1* pf)
{
	pf->arr = NULL;
	pf->size = 0;
	pf->capacity = 0;
}
//打印插入的数据
void PRINT(struct SeqList1* pf)
{
	for (int j = 0; j < pf->size; j++)
	{
		printf("%d ", pf->arr[j]);
	}
	printf("\n");
	//printf("%d\n", pf->capacity);
}
//插入数据实现
void SLInsert(struct SeqList1* pf,/*插入位置*/int pos,/*插入元素*/int x)
{
	assert(pf);
	assert(pos >= 0 && pos <= pf->size);
	//判断空间是否足够并且申请空间
	if (pf->size == pf->capacity)
	{
		int newcapacity = pf->capacity == 0 ? 4 : 2 * pf->capacity;
		int* tmp = (int*)realloc(pf->arr, newcapacity * sizeof(int));
		//判断内存是否申请成功
		if (tmp == NULL)
		{
			perror("realloc fail!");
			exit(1);
		}
		pf->arr = tmp;
		pf->capacity = newcapacity;
	}
	//插入数据
	//1.   将下表为pos及其后面的元素向后移动一位
	for (int i = pf->size; i > pos; i--)
	{
		pf->arr[i] = pf->arr[i - 1];
	}
	//2.   此时下标为pos的位置空缺。将数据插入
	pf->arr[pos] = x;
	pf->size++;
}
//删除元素
void ERASE(struct SeqList1* pf, int pos)
{
	//下标为a及其后面的元素向前移动一个位置
	for (int i = 0; i <pf->size - pos - 1; i++)
	{

		pf->arr[pos+i] = pf->arr[pos+ i+1];
	}
	pf->size--;
}
//元素查找实现
int FIND(struct SeqList1* ps, int b)
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->arr[i] == b)
			return i;//找到时返回下标

	}
	return -1;//没有找到，返回负数
}
int main()
{
	//定义顺序表
	struct SeqList1 ;
	//初始化顺序表
	BEG1(&ST);
	//插入数据
	SLInsert(&ST,0,0);
	PRINT(&ST);
	SLInsert(&ST,1,1);
	PRINT(&ST);
	SLInsert(&ST,2,2);
	PRINT(&ST);
	SLInsert(&ST,3,3);
	PRINT(&ST);
	SLInsert(&ST,4,4);
	PRINT(&ST);
	SLInsert(&ST,5,5);
	PRINT(&ST);
	SLInsert(&ST,6,6);
	PRINT(&ST);
	SLInsert(&ST,7,7);
	PRINT(&ST);
	SLInsert(&ST,8,8);
	SLInsert(&ST,9,9);
	SLInsert(&ST,10,10);
	SLInsert(&ST,11,11);
	//打印插入后的数据
	PRINT(&ST);
	//删除某个元素
	ERASE(&ST,/*下标*/8);
	PRINT(&ST);
	//ERASE(&ST,/*下标*/1);
	//PRINT(&ST); 
	//ERASE(&ST,/*下标*/2);
	//PRINT(&ST); 
	//ERASE(&ST,/*下标*/3);
	//PRINT(&ST);
	//查找某个元素
	int find=FIND(&ST,/*元素*/1);
	//判断是否找到
	if (find >= 0)
		printf("找到了，下标为%d\n", find);
	else
		printf("很遗憾，没有找到\n");
	 find = FIND(&ST,/*元素*/9);
	if (find >= 0)
		printf("找到了，下标为%d\n", find);
	else
		printf("很遗憾，没有找到\n");
	return 0;
}