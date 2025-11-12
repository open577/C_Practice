#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//指针
int main()
{
	int a = 10;
	int* pa = &a;
	char ch = 'w';
	void* pc = &ch;
	printf("%d\n", *pa);
	printf("%c\n", *(char*)pc + 1);
	printf("%#o,%#x", 123, 123);
	return 0;
}

//int main()
//{
//	int i = 0;
//	int n = 1;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			n++;
//		else if (i / 10 == 9)
//			n++;
//	}
//	printf("%d", n);
//	return 0;
//}

////1到100的数字中有多少个数字出现了9
//int main()
//{
//	int i = 0;
//	int n = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9 || i % 10 == 9)
//		{
//			printf("%d\n", i);
//			n++;
//		}
//	}
//	printf("%d", n);
//	return 0;
//}
//int main()
//{
//	
//	int arr[10] = {0,8,9,8,225,6,7,6,3,2};
//	int i = 0;
//	int n = 10;
//	/*for (n = 1; n <= 10; n++)
//	{
//		scanf_s("%d", arr);
//	}*/
//	
//	//int c = sizeof(arr) / sizeof(arr[0]);
//	int max = arr[0];
//	for (i = 1; i <10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//			
//	}
//	printf("%d", max);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b ;

//	int c = 3;
//	if (a > c)
//	{
//		a = c;
//		printf("%d", a);
//		printf("%d", c);
//	}
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	if (a > 5)
//	{
//		printf("%d", a);
//	}
//	else
//		printf("%d", a);
//	return 0;
//}
/*nt main()
{
	int a=strcmp("abr", "abz");
	printf("%d", a);
	return 0;
}*/
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			printf("%d", i);
//	}
//	return 0;
//}
////int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入你的数据:\n");
//	while (scanf_s("%d %d",&a,&b) != EOF)
//	{
//		for (c = 1; c <= a; c++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		for (c = 1; c <= b; c++)
//		{
//			printf("*");
//			
//
//		}printf("\n");
//	}
//	return 0;
//}