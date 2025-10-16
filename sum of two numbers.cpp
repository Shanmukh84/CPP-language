#include<stdio.h>
#include<stdlib.h>
main()
{
	int *a,*b,*c;
	a=(int*)malloc(sizeof(int));
	b=(int*)malloc(sizeof(int));
	printf("enter two numbers");
	scanf("%d%d",a,b);
	c=(int*)malloc(sizeof(int));
	*c=*a+*b;
	free(a);
	free(b);
	printf("sum=%d",*c);
	free(c);
}
