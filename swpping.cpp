#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter two values:");
	scanf("%d%d",&a,&b);
	printf("\n before swapping:\n b=%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\n after swapping:\n a=%d \n b=%d",a,b);
}
