//mallac in dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i,m;
	printf("Enter number of elements:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("Memory allocation not possible");
		exit(0);
		
	}
	else
	{
		printf("Enter updated size:");
		scanf("%d",&m);
		p=(int*)realloc(p,m*sizeof(int*));
		printf("enter the array elements:");
		for(i=0;i<m;i++)
		{
			scanf("%d",(p+i));
		}
		printf("The array elements are:");
		for(i=0;i<m;i++)
		{
			printf("%d ",*(p+i));
		}
	}
}
