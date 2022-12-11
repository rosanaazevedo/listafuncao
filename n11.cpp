#include<stdio.h>

int num(int a)
{
	int i, resto;
	
	scanf("%d",&a);
	
	while( a > 0)
	{
		for(i=1; i<=a;i++)
		{
		
			resto = a%i;
			
		}
	}
	
	return resto;
}

int main()
{ 
	int a, resto;
	
	resto=num(a);
	
	if(resto == 0)
	{
		printf("%d",resto);
	}
		
	return 0;
}