#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two values:");
	scanf("%d%d",&a,&b);
	printf("before swapping:\n a=%d \n b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n after swapping:\n b=%d",a,b);
}
