#include<stdio.h>
int main()
{
	int i,j;
	for (i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==3)
			break;
			printf("%d%d\t",i,j);
		}
		printf("\n");
	}
	return 0;
}
