#include<stdio.h>
int main()
{
    int P;
    scanf_s("%d", &P);
    int i = 0;
    for (i = 1; i < P; i++)
    {
        int j = 1;
        for (j = 1; j <= i; j++)
        {
            printf("%d*%d=%d ", j, i, i * j);
        }
        printf("\n");
    }
    // 请在此输入您的代码
    return 0;
}