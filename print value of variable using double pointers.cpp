//wap to print a value of variable using double pointer (pointer to pointer).
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=10;
	int *p;
	int **q;
	p=&a;
	q=&p;
	printf("sizeof pointer is :%d",sizeof(p));
	printf("\nvalue of p is :%x",p);//address of a
	printf("\naddress of p is :%x",&p);//address of p
	printf("\naddress of a is:%x",&a);//address of a
	printf("\nvalue of q is :%x",*q);//pointer address
	printf("\naddress of q is :%x",&q);//double pointer address
	printf("\nvalue of a is:%d",**q);//var avlue
}
