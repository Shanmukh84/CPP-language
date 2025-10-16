//wap using function check num is palindrome or not.

#include<stdio.h>
void palindrome();//decl of fun
int main()
{
	palindrome();
}
void palindrome()
{
	int n,sun,rem,rev=0;
	printf("enter number:");
	scanf("%d",&n);
	sun=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
		
	}
	if(rev==sun)
	{
		printf("palindrome");
		
	}
	else
	{
		printf("not a palindrome");
	}
}
