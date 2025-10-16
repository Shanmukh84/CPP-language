#include<stdio.h>
struct date
{
	int d:4;
	int m:5;
	int y;
};
int main()
{
	struct date doj={6,10,2020};
	printf("%d/%d/%d",doj.d,doj.m,doj.y);
}
