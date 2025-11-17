#include<stdio.h>
#include<stdlib.h>
int main()
{

	//malloc(申请空间）
	int* p = (int*)malloc(10 * sizeof(int));

	if (p == NULL)
	{
		perror("malloc");
		return 1;
	}
	for (int i = 0; i <= 9; i++)
	{

		*(p + i) = i;
	}
	for (int i = 0; i <= 9; i++)
	{
		printf("%d ", /**(p + i)*/p[i]);
	}
	printf("\n");
	//释放空间，并且将p赋为空指针
	free(p);
	p = NULL;
	//calloc申请空间，并且初始为0
	int* f = (int*)calloc(10, sizeof(int));
	if (f == NULL)
	{
		perror("malloc");
		return 1;
	}
	for (int i = 0; i <= 9; i++)
	{
		printf("%d ", /**(f + i)*/f[i]);
	}
	free(f);
	f = NULL;
	printf("\n");
	//realloc  对开辟的空间进行调整
	int* g = (int*)realloc(p, sizeof(int) * 10*2);
	if (g == NULL)
	{
		perror("malloc");
		return 1;
	}
	for (int i = 0; i <= 19; i++)
	{
		
		*(g + i) = i;

	}
	for (int i = 0; i <= 19; i++)
	{
		printf("%d ", /**(g + i)*/g[i]);
		
	}
	printf("\n");
	
	free(g);
	g = NULL;
	return 0;

}