#include"Contact.h"
//更改联系人
void CHANGE(SL* pf)
{
	int find = FIND(pf);
	if (find >= 0)
	{
		printf("请输入要修改的联系人姓名：");
		scanf("%s", pf->arr[find].name);
		printf("请输入要修改的联系人年龄：");
		scanf("%d", &pf->arr[find].age);
		printf("请输入要修改的联系人性别：");
		scanf("%s", pf->arr[find].gender);
		printf("请输入要修改的联系人电话号码：");
		scanf("%s", pf->arr[find].num);
		printf("请输入要修改的联系人住址：");
		scanf("%s", pf->arr[find].addr);
	}
	else
		return;
}
//动态顺序表初始化
void BEG1(struct SeqList1* pf)
{
	pf->arr = NULL;
	pf->size = 0;
	pf->capacity = 0;
}
//展示联系人
void PRINT(SL* pf)
{
	for (int j = 0; j < pf->size; j++)
	{
		printf("姓名：%s\n"
			   "年龄：%d\\n"
			   "性别：%s\n"
			   "电话号码：%s\n"
			   "住址：%s\n", pf->arr[j].name,pf->arr[j].age, pf->arr[j].gender, pf->arr[j].num, pf->arr[j].addr);
	}
	printf("\n");
	printf("\n");
	//printf("%d\n", pf->capacity);
}
//添加联系人
void SLInsert(SL* pf)
{
	assert(pf);
	//判断空间是否足够并且申请空间
	if (pf->size == pf->capacity)
	{
		int newcapacity = pf->capacity == 0 ? 4 : 2 * pf->capacity;
		ConNode*tmp = (ConNode*)realloc(pf->arr, newcapacity * sizeof(ConNode));
		//判断内存是否申请成功
		if (tmp == NULL)
		{
			perror("realloc fail!");
			exit(1);
		}
		pf->arr=tmp;
		pf->capacity = newcapacity;
	}
	//添加联系人
	printf("请输入联系人姓名：");
	scanf("%s", pf->arr[pf->size].name);
	printf("请输入联系人年龄：");
	scanf("%d", &pf->arr[pf->size].age);
	printf("请输联系人性别：");
	scanf("%s", pf->arr[pf->size].gender);
	printf("请输入联系人电话号码：");
	scanf("%s", pf->arr[pf->size].num);
	printf("请输入联系人住址：");
	scanf("%s", pf->arr[pf->size].addr);
	pf->size++;
}
//删除联系人
void ERASE(SL*pf)
{
	printf("删除操作\n");
	int find=FIND(pf);
	//下标为a及其后面的元素向前移动一个位置
	for (int i = 0; i < pf->size - find - 1; i++)
	{

		pf->arr[find + i] = pf->arr[find + i + 1];
	}
	pf->size--;
}
//联系人查找实现
int FIND(SL*pf)
{
	//printf("请输入你要查找/删除的联系人的姓名：");
	char  ch[20];
	scanf("%19s", ch);
	for (int i = 0; i < pf->size; i++)
	{
		if ((strcmp(ch, pf->arr[i].name)) == 0)
		{
			return i;
		}
	}
	printf("很抱歉，没有找到！\n");
	return-1;
}
//打印找到的联系人
void PRI(SL* pf, int find)
{
	if (find >= 0)
	{
		printf("联系人姓名：%s\n", pf->arr[find].name);
		printf("联系人年龄：%d\n", pf->arr[find].age);
		printf("联系人性别：%s\n", pf->arr[find].gender);
		printf("联系人电话号码：%s\n", pf->arr[find].num);
		printf("联系人住址：%s\n", pf->arr[find].addr);
		printf("\n");
		printf("\n");
	}
	else

		return;
}