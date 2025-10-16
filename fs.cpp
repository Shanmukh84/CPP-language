#include<stdio.h>
int main()
{
	FILE*p;
	p=fopen("array to pointer.cpp","r");
	fprintf(p,"happy diwali ");
	fputs("\nchiru sir",p);
	return 0;
}
