#include<stdio.h>
int main()
{
	char c[100];
	printf("enter strng");
	scanf("%[^\n]%*c",c);
	printf("%s",c);
	return 0;
}
