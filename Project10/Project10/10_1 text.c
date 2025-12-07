//sizeofµÄÓ¦ÓÃ
#include<stdio.h>
#include<stddef.h>
int main()
{
	printf("%zu\n", sizeof(char));
	printf("%zu\n", sizeof(int));
	printf("%zu\n", sizeof(short));
	printf("%zu\n", sizeof(float));
	printf("%zu\n", sizeof(double));
	printf("%zu\n", sizeof(long));
	printf("%zu\n", sizeof(long long));
	return 0;
}