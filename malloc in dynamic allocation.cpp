//malloc in dynamic allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i;
	printf("enter number of elements:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("memory allocation not possible");
		exit(0);
		
	}
	else
	{
		printf("\nenter arrray elememts:");
		for(i=0;i<n;i++)
		{
			scanf("%d",(p+i));
		}
		printf("\narray elements are:");
		for(i=0;i<n;i++)
		{
			printf("%d",*(p+i));
		}
	}
}
