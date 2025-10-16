#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=10,b=20,*p,*q;
	p=&a;
	q=&b;
	int sum=*p+*q;
	printf("sum is :%d",sum);
	printf("\n%x",p);
	p=--p;
	printf("\nupdated p is:%x",p);
	printf("\naddress of p%x",&p);
	printf("\naddress of p%x",&q);
	if(p==q)
	{
		printf("equal");
	}
	else
	{
		printf("not equal");
	}
}
