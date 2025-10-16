//wap to check num is even or odd.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	printf("enter a value:");
	scanf("%d",&a);
	int *p;
	int **q;
	p=&a;
	q=&p;
	if(**q%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}
