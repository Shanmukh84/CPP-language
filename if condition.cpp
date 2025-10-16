//switch
#include<stdio.h>
int main()
{
	char ch;
	printf("enter the choice 1-7");
	scanf("%c",&ch);
	switch(ch)
	{
		case 1:
			{
				printf("monday");
				break;
			}
			case 2:
				printf("tuesday");
				break;
			{
			default:
				printf("wrong number");
				break;
			}
