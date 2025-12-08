#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iso646.h>
//int main()
// {
//	int c;
//   	int score=0;
//	//scanf("%d", &score);
//	printf("%s", "asd asd\n");
//	printf("%c\n", ' s');
//	char arr[10];
//	scanf("%s", arr);
//	printf("%s\n", arr); 
//	//char ch = 0;
//	//printf("%c\n",'s');
//	//scanf("%c",&ch );
//	//printf("%c\n", ch);
//
//	return 0;
//} 
//int main()
//{
//	unsigned int a= 0;
//	scanf("%u", &a);
//	printf("%u", a);
//	return  0;
//
//}

//int main()
//{
//	int a = 10;
//	if (a>0 and a % 2 ==0)
//		printf("nijao");
//
//	return 0;
//}
int main()
{
	int a = 0;
	scanf("%d", &a);
	switch(a)
	{
	case 1:
		printf("星期一");
		break;
	case 2:
		printf("星期二");
		break;
	case 3:
		printf("星期三");
		break;
	case 4:
		printf("星期四");
		break;
	case 5:
		printf("星期五");
		break;
	case 6:
		printf("星期六");
		break;
	case 7:
		printf("星期日");
		break;
	default:
		printf("去你妈的");
	}
	
	return 0;
}
