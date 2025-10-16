//wap to program to check armstrong or not.
#include<stdio.h>
int main()
{
	 int n,temp,rem,sum=0;
	 printf("enter n value:");
	 scanf("%d",&n);
	 temp=n;
	 while(n!=0)
	 {
	 	rem=n%10;
	 	sum=sum+rem*rem*rem;
	 	n=n/10;
	 }
	 if(temp==sum)
	 {
	 	printf("armstrong number");
	 }
	 else
	 {
	 	printf("not a armstring number");
	 }
	 return 0;
}
