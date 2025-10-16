#include<stdio.h>
int main()
{
	int i,n;
	printf("enter n value:");
	scanf("%d",&n);
	i=1;
	   do{
	   	printf("\n%d*%d=%d",n,i,n*i);
	   	i++;
	   }
	   while(i<=10);
	   return 0;
}

