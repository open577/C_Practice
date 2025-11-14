#include<stdio.h>
int main()
{
	int a = 1;
	if (*(char*)&a == 1)
		printf("小端\n");
	else
		printf("大端\n");
	int b = 0x11223344;
	if (*(char*)&b == 0x44)
		printf("小端\n");
	else
		printf("大端\n");
	printf("%x %x %x %x", *((char*)&b), *((char*)&b+1), *((char*)&b+2),*((char*)&b+3));
	return 0;
}