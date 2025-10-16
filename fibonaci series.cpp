#include<stdio.h>
int main()
{
	int t1=0,t2=1,t3,i,n;
	scanf("%d",&n);
	printf("%d\t %d",t1,t2);
	for(i=3;i<=n;i++)
	{
		t3=t1+t2;
		printf("\t%d",t3);
		t1=t2;
		t2=t3;
	}
	return 0;
}
