#include<stdio.h>

int n(int a, int b, int c)
{
	int soma=0;
	
	if(a>b && a>c)
	{
		if(b>c)
		{
			soma = a+c;
		}
	}
	else if (b>a && b>c)
	{
		if(c>a)
		{
			soma = b + a;
		}
	}
	
	
	else if(c>b && c>a)
	{
		if(a>b)
		{
			soma = b + c;
		}
	}
	
	return soma;
}

int main()
{
	int soma=0, a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	soma = n(a,b,c);
	printf("%d", soma);
	
	return 0;
}

