#include<stdio.h>
#include<math.h>
int main()
{
	double  x1,x2,p, q,disc;
	double a = 0;
	double b = 0;
	double c = 0;
	scanf_s("%lf,%lf,%lf", &a,&b,&c);
	
		if (a == 0)
		{
			printf("错误：a不能为0\n");
		
		}
		disc = b * b - 4 * a * c;
		if (disc < 0)
		{
			printf("此方程无实数根\n");
		}
		else if (disc == 0) 
		{
			double x1 = -b / (2.0 * a);
			printf("有两个相等实数根：%lf\n", x1);
		}
		else
		{
			p = -b / (2.0 * a);
			q = sqrt(disc) / (2.0 * a);
			x1 = p + q;
			x2 = p - q;
			printf("两个实数根分别是：%lf, %lf\n", x1, x2);
		}

	return 0;
}
