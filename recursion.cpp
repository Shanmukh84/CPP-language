//wap to calculate factorial of number using recursion.
//withargument & return type
#include<stdio.h>
int factorial();
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
		
	}
}
int main()
{
	int n;
	printf("enter n value");
	scanf("%d",&n);
	printf("factorial of a numbar:%d",factorial(n));
	
}
