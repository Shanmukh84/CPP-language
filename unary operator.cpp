/*//unary operator +,-,++,--
#include<stdio.h>
int main()
{
	int a=10;
	//a=a+1;
	//+a;
	//printf("value is %d",a--);
	//printf("\n%d",a);
	
	//printf("value is %d",a--);
	//printf("\n%d",a);
	
	
}*/
/*//relational operator <> <=> = == !=
#include<stdio.h>
int main()
{
	int a=10,b=20;
	printf("a<b  is %d",a<b);
	printf("\na<= b is : %d",a<=b);
	printf("\na> b is :%d",a>b);
	printf("\na>=b is :%d",a>=b);
	printf("\na== b is :%d",a==b);
	printf("\na!= bis %d",a!=b);
}*/
/*//logical operators && || !
#include<stdio.h>
int main()
{
	int a=10,b=20,c=15,d=25;
	printf("a<b&& b>c is %d",a<b && b>c);
	printf("\na>b|| b,c is %d",a>b || b<c);
	printf("\n!(a>b)is %d",!(a>b));
}*/
/*//assignment operator +=,-=,*=,/=,%=,<<=,>>= &=,|=
#include<stdio.h>
int main()
{
	int a=10,b=3;
	//a+=10=a=a+10
	printf("a+=10 is %d",a+=10);
	printf("\na-=5 is %d",a-=5);
	printf("\na*=5 is %d ",a*=5);
	printf("\na/5= is %d",a/=5);
}*/
//conditional operator
#include<stdio.h>
int main()
{
	int age;
	printf("enter your age");
	scanf("%d",&age);
	age>=18? printf("eligible for vote"):printf("not eligible for vote");
	return 0;
}

