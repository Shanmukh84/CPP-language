#include<stdio.h>
 #include<stdlib.h>
 struct node
 {
 	int data;
 	struct node *next;
 }  *head=NULL;
 void createlinkedlist()
{
 	struct node *temp,*ptr;
 	temp=(struct node*)malloc(sizeof(struct node));
 	temp->next=NULL;
 	printf("\nEnter data value in a node");
 	scanf("%d",&temp->data);
 	if(head==NULL)
 	{
 		head=temp;
	}
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
	}
}
void displaylinkedlist()
{
	struct node *ptr;
	ptr=head;
	if(ptr==NULL)
	printf("\n linkedlist is empty:");
	else
	{
		while(ptr!=NULL)
		{
			printf("%d->",ptr->data);
			ptr=ptr->next;
		}
		printf("NULL");
	}
}
void last_insert()
{
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("\nEnter data in last node");
 	scanf("%d",&temp->data);
 		if(head==NULL)
 	{
 		head=temp;
	}
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
		printf("\n insert at last is done:");
	}
}
void first_delete()
{
	struct node *ptr;
	ptr=head;
	head=ptr->next;
	free(ptr);
	printf("\n Deleted first node succdssfully!!");
}
 int main()
 {
 	int ch;
 	while(1)
 	{
 		printf("\n 1.createlinkedlist \n 2. displaylinkedlist \n 3.last_insert \n 4.first_delete \n 5.last_delete \n 6.exit \n Enter your choice:");
 		scanf("%d",&ch);
 		if(ch==1)
 		createlinkedlist();
 		else if(ch==2)
 		displaylinkedlist();
 		else if(ch==3)
 		last_insert();
 		else if(ch==4)
 		first_delete();
 		/*else if(ch==5)
 		last_delete();*/
 		else if(ch==6)
 		break;
 		else
 		printf("Wrong choice:");
	 }
 }
