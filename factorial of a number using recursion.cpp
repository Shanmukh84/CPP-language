//wap to find factorial of a number using recursion.
#include<stdio.h>
//unsigned long long int fact(int);//fun declr
unsigned long long int fact(int a)
{
	if(a<=1)
	{
		return 1;
	}
	else
	{
		return a*fact(a-1);
	}
}
int main()
{
	int n;
	printf("enter value:");
	scanf("%d",&n);
	printf("factorial of %d is:%ld",n,fact(n));
}

