#include<stdio.h>
#include<stdlib.h>
#define max 5
int Q[max],front=-1,rear=-1;
void enqueue();
void dequeue();
void display();
void enqueue()
{
	if (front==(rear+1)%max)
	printf("queue is overflow \n");
	else
	{
		if(front==-1)
		front=rear=0;
		else
		rear=(rear+1)%max;
		printf("enter data:");
		scanf("%d",&Q[rear]);
	}
}
void dequeue()
{
	if(front==-1)
	printf("queue is underflow \n");
	else if(front==rear)
	front=rear=-1;
	else
	front=(front+1)%max;
}
void display()
{
	if (front==-1)
	printf("queue is empty \n");
	else
	{
		int i=front;
		while(i!=rear)
		{
			printf("<-%d->",Q[i]);
			i=(i+1)%max;
		}
		printf("<-%d->\n",Q[i]);
	}
}
int main(){
	int ch;
	while(1){
		printf("\n0.exit\n1.enqueue\n2.dequeue\n3.display\nenter your choice");
scanf("%d",&ch);
switch(ch){
	case 0:{
		exit(0);
		break;
	}
	case 1:{
		enqueue();
		break;
	}
	case 2:{
		dequeue();
		break;
	}
	case 3:{
		display();
		break;
	}
	default:{
		printf("you entered wrong choice");
		break;
	}
	
}
	}
	return 0;
}
