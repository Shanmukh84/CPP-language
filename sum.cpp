#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter n value:");
	scanf("%d",&n);
	i=0;
	do{
		printf("\n");
		i++;	
		j=1;
		do
		{
		printf("%d*%d=%d  ",i,j,i*j);
		j++; 
		}
		while(j<=10);
	}
	while(i<=n);
	return 0;
}
