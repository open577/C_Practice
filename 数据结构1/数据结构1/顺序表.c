#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define N 100
//静态顺序表
struct SeqList
{
	int arr[N];//
	int size;//数组当前元素个数

}SL;
//静态顺序表初始化并打印
void BEG(struct SeqList*pa)
{
	for (int i = 0; i < N; i++)
		pa->arr[i] = i;
	pa->size = 100;
	for (int i = 0; i < N; i++)
	{
		printf("%d ", pa->arr[i]);
	}
	printf("\n");
}
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
//动态顺序表尾部插入数据
//尾插
void STpushback(struct SeqList1* pf,int x)
{
	//申请空间
	if (pf->size == pf->capacity)
	{
		int NEWcapacity = pf->capacity == 0 ? 4 : 2 * pf->capacity;
		int* NEW = (int*)realloc(pf->arr, NEWcapacity*sizeof(int));
		if (NEW==NULL)
		{
			perror("relloc fail!");
			exit(1);
		}
		pf->arr = NEW;
		pf->capacity = NEWcapacity;

	}
	pf->arr[pf->size++] = x;//插入数据
	

}
///打印尾插后的数字内容
void PRINT(struct SeqList1* pf)
{
	for (int i = 0; i < pf->size; i++)
	{
		printf("%d ", pf->arr[i]);
	}
	printf("\n");
	//printf("%d\n", pf->capacity);
}

int main()
{
	struct SeqList SL;//静态顺序表
	//初始化并打印
	BEG(&SL);
	struct SeqList1 ST;//动态顺序表
	BEG1(&ST);//初始化
	STpushback(&ST, 1);//尾插
    //打印数组内的数据
	PRINT(&ST);
	STpushback(&ST, 2);
	PRINT(&ST);
	STpushback(&ST, 3);
	PRINT(&ST);
	STpushback(&ST, 4);
	PRINT(&ST);
	STpushback(&ST, 5);
	PRINT(&ST);
	//循环插入数据
	for (int i = 6; i < 20; i++)
	{
		STpushback(&ST, i);
		PRINT(&ST);
	}  
	return 0;
}