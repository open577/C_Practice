#include<stdio.h>
int main()
{
	int a = 0, b,c;
	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= a; b++)
		{
			c = a * b;
		printf("%d*%d=%d ", b, a, c);
		}
		printf("\n");
	}
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%zu\n", sizeof(arr));
	printf("%d\n", sizeof(char));
	printf("%zu\n", sizeof(char));
	printf("%d", sizeof(char) / sizeof(arr[0]));
	return 0;
}
