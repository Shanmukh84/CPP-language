#include<stdio.h>
int swapping(int*,int*);
int main()
{
	int a=100,b=200;
	printf("before swapping:\n%d\n%d",a,b);
	swapping(&a,&b);
	printf("\nafter swapping:\n%d\n%d",a,b);
}
int swapping(int*a,int* b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
