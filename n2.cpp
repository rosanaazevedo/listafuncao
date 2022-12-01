#include<stdio.h>

int num(int x,int y)
{
	if(x>y)
	{
		return x;
	}
	
	if(y>x)
	{
		return y;
	}
}



int main()
{
	int x,y;
	
	scanf("%d %d", &x,&y);
	printf("%d",num(x,y));

	return 0;
}