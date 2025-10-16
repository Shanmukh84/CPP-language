#include<stdio.h>
int main()
{
	int arr[5],i;
	printf("enter array values:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\narray elements are");
	for(i=0;i<5;i++)
	{
		printf("\n%d",arr[i]);
	}
	return 0;
}
