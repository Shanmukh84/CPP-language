//WAC program to implement bubble sort algorithm.
#include<stdio.h>
int main()
{
	int a[10],n,i,t,j;
	printf("enter no.of elements:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	//bubble sort 
	for(i=1;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		if(a[j]<a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
		}
	}
	printf("after swapping:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
	
