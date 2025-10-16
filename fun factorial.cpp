//wap to find factoriial of a number
//without argument& return type
#include<stdio.h>
int fact(int);
int main()
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
	printf("factorial of number is:%d",fact(n));
	return 0;
}
int fact(int n)
{
	int i,fact=1;
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return;
}
