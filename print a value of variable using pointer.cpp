//wap to print a value of variable using pointer.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=10;
	int *p;
	p=&a;
	printf("sizeof pointer is :%d",sizeof(p));
	printf("\nvalue of p is :%x",p);//address of a
	printf("\naddress of p is :%x",&p);//address of p
	printf("\naddress of a is:%x",&a);//address of a
	printf("\nvalue of a is :%d",*p);//variable value (value at address)
}
