#include"Heap.h"
//父子节点进行交换
void Swap(HPDataType* p1, HPDataType* p2)
{
	HPDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
void HPInit(HP* php)
{
	assert(php);
	php->a = NULL;
	php->size = php->capacity = 0;
}
//销毁
void HPDestroy(HP* php)
{
	assert(php);
	free(php->a);
	php->a = NULL;
	php->size = php->capacity = 0;
}
//插入数据
void  HPPush(HP* php, HPDataType x)
{
	assert(php);
	if (php->size == php->capacity)
	{
		int newcapacity = php->capacity == 0 ? 4 : php->capacity * 2;
		HPDataType* tmp = (HPDataType*)realloc(php->a, newcapacity * sizeof(HPDataType));
		if (tmp == NULL)
		{
			perror("realloc fail!");
			exit(1);
		}
		php->a = tmp;
		php->capacity = newcapacity;
	}
	//插入数据
	php->a[php->size] = x;
	php->size++;
	//向上调整
	AdjustUp(php->a, php->size - 1);
}
//向上调整(判断父子节点是否需要进行交换
void AdjustUp(HPDataType* a, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[child] > a[parent])
		{
			//交换数据
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else break;
	}
}
//向下调整
void AdjustDown(HPDataType* a, int n, int parent)
{
	//先假设左孩子比右孩子小，再和右孩子进行比较

	int child = parent * 2 + 1;
	while (child < n)
	{

		if (child<n && a[child + 1]>a[child])
		{
			++child;
		}
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else break;
	}
}
//删除顶部元素
void HPPop(HP* php)
{
	assert(php);
	assert(php->size > 0);
	Swap(&php->a[0], &php->a[php->size - 1]);
	php->size--;
	AdjustDown(php->a,php->size,0);
}
//堆顶元素
HPDataType HPTop(HP* php)
{
	assert(php);
	assert(php->size > 0);
	return php->a[0];
}
//判空
bool HPEmpty(HP* php)
{
	assert(php);
	return php->size == 0;
}
//打印
void Print(HP* php)
{
	printf("堆的顺序（大堆）：");
	for (int i = 0; i < php->size; i++)
		printf("%d ", php->a[i]);
	printf("\n");
}
int main()
{
	HP p;
	HPInit(&p);
	HPPush(&p, 4);
	HPPush(&p, 2);
	HPPush(&p, 8);
	HPPush(&p, 1);
	HPPush(&p, 5);
	HPPush(&p, 6);
	HPPush(&p, 9);
	HPPush(&p, 33);
	HPPush(&p, 3);
	HPPush(&p, 334);
	HPPush(&p, 45);
	HPPush(&p, 65);
	HPPush(&p, 34);
	HPPush(&p, 245);
	HPPush(&p, 45);
	HPPush(&p, 435);
	HPPush(&p, 4535);
	HPPush(&p, 7);
	HPPush(&p, 45);
	HPPush(&p, 65);
	HPPush(&p, 767);
	HPPush(&p, 4566);
	Print(&p);
	printf("由大到小的顺序为：");
	while (!HPEmpty(&p))
	{
		printf("%d ", HPTop(&p));
		HPPop(&p);
	}
	printf("\n");
	return 0;
}