#include<stdio.h>
#include<stdlib.h>

int num(int a, int b, int c)
{
	int resto1, resto2,resto3, cont=0;
	
	resto1 = a%2;
	resto2 = b%2;
	resto3 = c%2;
	
	if(resto1==0)
	{
		cont++;
	}
	
	if(resto2==0)
	{
		cont++;
	}
	
	if(resto3==0)
	{
		cont++;
	}
	
	return cont;
}

int main()
{
	int a,b,c, cont;
	
	scanf("%d %d %d",&a,&b,&c);
	cont = num(a,b,c);
	printf("%d",cont);	
	
	return 0;
}