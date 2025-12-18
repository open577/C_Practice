#define  _CRT_SECURE_NO_WARNINGS
#include"Heap.h"
#include<time.h>
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
	//随机生成十万个数据，并打印出最大的前n个数
	//srand((unsigned int)time(NULL));
	////生成随机数
	//const char* file = "data.txt";
	//FILE* pf = fopen(file, "w");
	//if (pf == NULL)
	//{
	//	printf("打开文件失败！");
	//	exit(0);
	//}
	//for (int i = 0; i < 100000; i++)
	//{
	//	fprintf(pf,"%d\n", rand()%1000000+1);
	//}
	//fclose(pf);
	printf("请输入检查的数据个数->");
	int n;
	scanf_s("%d", &n);
	int* arr1 = (int*)malloc(n* sizeof(int));
	if (arr1 == NULL)
	{
		perror("malloc fail!");
		exit(1);
	}
	const char* file1 = "data.txt";
	FILE* pd = fopen(file1, "r");
	if (pd == NULL)
	{
		printf("读取文件失败！");
		exit(1);
	}
	//读取前n个数据
	for (int i = 0; i < n; i++)
	{
		fscanf(pd, "%d", &arr1[i]);
	}
	//建n个数的小堆
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(arr1, n, i);
	}
	//读取剩下的数据
	int f = 0;
	while (fscanf(pd, "%d", &f)>0)
	{
		if (f > arr1[0])
		{
			arr1[0] = f;
			AdjustDown(arr1, n, 0);
		}
	}
	for (int i = 0; i < n;i++)
	{
		printf("%d ", arr1[i]);
	}
		return 0;
}