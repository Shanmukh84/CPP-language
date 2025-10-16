//wap to pass array to function find sum of array elements.
#include<stdio.h>
int display(int[],int);
int main()
{
	int age[50],i,n,result;
	printf("enter n value");
	scanf("%d",&n);
	printf("enter elements in array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&age[i]);
	}
result=display(age,n);
printf("elements sum in array is %d",result);
	return 0;

}
int display(int age[],int n)
{
	int sum=0,i;
	printf("enter n value");
	scanf("%d",&n);
	printf("enter elements in array")
	for(i=0;i<n;i++)
	{
		sum=sum+age[i];
	}
	printf(" of array elements:%d",result);
}
