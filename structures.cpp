#include<stdio.h>
#include<string.h>
int roll;
char name[7];
char sec;
float cgpa;
};
int main()
{
	struct student s[5];
	printf("displaying students infomation:");
	for(int i=0;i<5;i++)
	{
		scanf("%d %s %c%f",s[i].roll,s[i].name,s[i].sec,s[i].cgpa);
	}
	return 0;
}
