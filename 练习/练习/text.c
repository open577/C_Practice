//1µ½20½×³ËºÍ
#include<stdio.h>
int main()
{
	long long sum = 0;
	long long i = 1;
	for (int a = 1; a <= 20; a++)
	{
		i *= a;
		sum += i;
	}
	printf("%lld", sum);
	return 0;
}