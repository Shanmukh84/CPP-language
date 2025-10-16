#include<stdio.h>
#include<string.h>
int main()
{
	char name [50];
	printf("enter your name:");
	gets(name);
	//printf("your name is:");
	puts("your name is:");
	puts(name);     //displays string
	return 0;
}
