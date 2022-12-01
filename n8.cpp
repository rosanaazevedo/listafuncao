#include<stdio.h>

double juros(double c, double m, double t)
{
	double j = (c * m * (t /100));
	
	return j;
}
int main()
{
	double c, m, t;
	
	scanf("%lf %lf %lf",&c, &m, &t);
	
	printf("%.2lf",juros(c,m,t));
	
	return 0;
}