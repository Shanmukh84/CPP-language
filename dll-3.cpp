#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node*prev;
	int data;
	struct node*next;
}*head=NULL;
void create_dll(){
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->prev=temp->next=NULL;
	printf("\n enter data in node:");
	scanf("%d",&temp->data);
	if(head==NULL){
		head=temp;
	}
	else {
		struct node*ptr;
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
		temp->prev=ptr;
		
	}
}
void display_dll()
{
	 struct node*ptr;
	 ptr=head;
	 if(head==NULL)
	 {
	 	printf("\n dll is empty");
	 }
	 else 
	 {
	 while(ptr!=NULL)
	 {
	 	printf("<-%d->",ptr->data);
	 	ptr=ptr->next;
	 }
	 printf("NULL");
}
}
void first_insert()
{
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->prev=temp->next=NULL;
	printf("\n enter the data:");
	scanf("%d",&temp->data);
	if(head==NULL){
		printf("\n dll is empty");
	}
	else
	{
		ptr=head;
		temp->next=head;
		ptr->prev=temp;
		head=temp;
	}
}




int main()
{
	int ch;
	while(1){
		printf("\n0.exit \n1.create \n2.display \n3.first_insert\n enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
				 create_dll();
				 break;
				}
			case 2:
			{
				display_dll();
				break;
			}
			case 0:
			{
				exit(0);
				break;
			}
			case 3:
			{
				first_insert();
				break;
			}	
		}
	}
}
