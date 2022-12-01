#include<stdio.h>

int area(int b, int h)
{
	int result = 0;
	
	if(b==h)
	{
		result = 1;
	}
	
	return result;
}

int main()
{
	int b, h, result;
	
	scanf("%d %d", &b, &h);
	result=area(b,h);
	printf("%d",result);
	
	return 0;
}