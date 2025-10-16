//wap to print total count of even elements and odd elements in array.
#include<stdio.h>
int main()
{
	int i,a[100],n,even_count=0,odd_count=0;
	printf("enter size of array:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		printf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			even_count=even_count+1;
		}
		else
		{
			odd_count=odd_count+1;
		}
		printf("even numb count in array:%d\nodd numb count is %d",even_count,odd_count);
		return 0;
	}
}
