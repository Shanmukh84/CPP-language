//wap to reverse the number using functions
#include<stdio.h>
void rev(int);
int main()
{
	int a;
	printf("enter value:");
	scanf("%d",&a);
	rev(a); // function ur passing the actual parameter
	return 0;
}
void rev(int n)   // fun defn formal parameter
{
	int rem,rev=0;
	int m=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	printf("reverse of %d is%d",m,rev);
}


