#include<stdio.h>
#include<math.h>

double delta(double a, double b, double c)
{
	double d = (b*b) - (4*a*c);
	
	return d;
}

double positivo(double b, double a)
{
	double d;
	
	double raiz1 = ( -b + sqrt(d)) / (2*a);
	
	return raiz1;
}

double negativo(double b, double a)
{
	double d;
	
	double raiz2= ( -b - sqrt(d)) / (2*a);
	
	return raiz2;
}

int main()
{
	double a, b ,c , raiz1, raiz2, d;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	delta(a,b,c);
	positivo(b,a);
	negativo(b,a);
	
	if(d>0)
	{
		printf("%.1lf",raiz1);
		printf("%lf",raiz2);
	}
	
	if(d=0)
	{
		printf("%.1lf",raiz1);
		
	}
	
	if(d<0)
	{
		printf("Nao existem raizes");
	}
	
	return 0;
}