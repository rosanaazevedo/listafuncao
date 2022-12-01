#include<stdio.h>

double sn(double n, double an, double a1)
{
	double sn =( n * (a1 + an)) / 2;
	
	return sn;
}

int main()
{
	double n, a1, an;
	
	scanf("%lf %lf %lf",&n, &a1, &an);
	printf("%.1lf", sn(n, an, a1));
	
	return 0;
}