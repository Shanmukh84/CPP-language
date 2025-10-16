#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		count=count+1;
	}
	if(count==0)
	{
		printf("prime number");
	}
		else
		{
			printf("not prime number");
		}
		return 0;
	}

