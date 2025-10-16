#include<stdio.h>
int main()
{
	int a=5,i,n;
	printf("enter n value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a);
		a=a+5;
	}
	return 0;
}
