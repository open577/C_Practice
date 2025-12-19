#include<stdio.h>
#include<string.h>
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[20] = { 0 };
	void*p = memcpy(arr2, arr1, 20);
	for (int i = 1; i <= 5; i++)
	{
		printf("%d ", *(int*)p);
		p=(int*)p + 1;
		
		
	}
	
	return 0;
}