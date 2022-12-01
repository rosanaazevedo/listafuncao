#include<stdio.h>


int imprimir(int n)
{
	int i;
	
	for(i=1; i<=n; i++)
	{
		
		printf("%d\n",i);
	}
	
	return n;
}

int main()
{
	int n;
	
	scanf("%d",&n);
	imprimir(n);
	
	return 0;
}