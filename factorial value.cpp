#include<stdio.h>
int fact(int n)
{
	int k=1;
	while(n>=1)
{
k=k*n;
n=n-1;
}
return k;
}
int main()
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
	int r=fact(n);
	printf("factorial value is%d",r);
}



