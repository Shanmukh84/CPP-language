#include<stdio.h>
#include<string.h>

struct employee//main struct
{
	char name[10];
	int id;
	struct date//dep struct
{
	int d;
	int m;
	int y;
}d;
}e;
int main()
{
	printf("enter data of employee");
	printf("\n enter name id:");
	scanf("%s %d",&e.name,&e.id);
	printf("enter date of birth of student:");
	scanf("%d %d %d",&e.d.d,&e.d.m,&e.d.y);
	printf("\nemployee data is:");
	printf("name:%s\nrollno:%d\ndob:%d/%d/%d",e.name,e.id,e.d.d,e.d.m,e.d.y);
	
	return�0;
}
