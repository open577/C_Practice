#include"Contact.h"
int main()
{
	//定义顺序表
	struct SeqList1 SL;
	//初始化顺序表（通讯录）
	BEG1(&SL);
	//添加联系人
	SLInsert(&SL);
	SLInsert(&SL);
	SLInsert(&SL);
	SLInsert(&SL);
    //展示联系人
	PRINT(&SL);
	//查找联系人并打印
	int find = FIND(&SL);
	PRI(&SL, find);
	//删除联系人
	ERASE(&SL);
	PRINT(&SL);
	//修改联系人
	CHANGE(&SL);  
	return 0;
}