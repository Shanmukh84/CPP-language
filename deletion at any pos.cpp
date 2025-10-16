#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}
*head=NULL;
void createlinkedlist()
{
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("\nEnter the data in node:");
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
void display()
{
	struct node *ptr;
	ptr=head;
	if(ptr==NULL)
	{
		printf("\n linked list is empty");
	}
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
void first_insert()
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("\n Enter the data in first node:");
	scanf("%d",&temp->data);
	temp->next=head;
	head=temp;
	printf("\n Insert at first is successfu!!");
}
void last_insert()
{
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("\n Enter the data in last node:");
	scanf("%d",&temp->data);
	ptr=head;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=temp;
    printf("added node at last of LInked list is successful");

	}
void first_delete()
{
	struct node *ptr;
	ptr=head;
	head=ptr->next;
	free(ptr);
	printf("\n deleted first node is successfull!!");
	
}
void last_delete()
{
	struct node *ptr,*temp;
	ptr=head;
	while(ptr->next->next!=NULL)
	{
		ptr=ptr->next;
		
	}
	ptr->next=NULL;
	free(temp);
	printf("\n last node is deleted successfully!!");
	
	
}
void anypos_insert()
{
	int pos,count=0;
	struct node *temp,*ptr;
	ptr = head;
	if(head==NULL)
	{
		printf("\nll is empty");
	}
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("enter data:");
	scanf("%d",&temp->data);
	printf("enter pos of insertion:");
	scanf("%d",&pos);
	if(pos<1 || pos>count+1)
	{
		printf("\n invalid pos");
	}
	else
	{
		ptr=head;
		if(pos==1)
		{
			temp->next=head;
			head=temp;
			printf("\n insertion at anypos first is successfull");
		}
		else{
			ptr=head;
			int i;
			for(i=1;i<pos-1;i++)
			{
				ptr=ptr->next;
			}
			void anypos_delete()
			{
				int pos,count=0;
				struct node*ptr,*temp;
				ptr=head;
				while(ptr!=NULL)
				count++;
				ptr=ptr->next;
			}
			printf("\n enter position:");
			scanf("%d",&pos);
			if(pos<1 || pos>count)
			{
				printf("\ninvalid pos");
			}
			else
			{
				ptr=head;
				if(pos==1)
				{
					head=ptr->next;
					free(ptr);
					printf("\n %d first node is deleted successfully",ptr->data);
				}
				else{
					int i;
					for(i=1;i<pos-1;i++)
					{
						temp=ptr->next;
						ptr->next=head->next;
						free(temp);
						printf("\n%d deletion at any pos is successfully",temp->data);
					}
				}
			}
			}
		}
	}
int main()
{
	int ch;
	while(1)
	{
	printf("\n1.createlinkedlist \n2.display \n3.first_insert \n4.last_insert \n5.first_delete \n6.last_delete \n7.anypos_insert \n8.anypos_delete \n9.exit\nenter your choise");
	scanf("%d",&ch);
	if(ch==1)
	createlinkedlist();
	else if(ch==2)
	display();
	else if(ch==3)
	first_insert();
	else if(ch==4)
	last_insert();
	else if(ch==5)
	first_delete();
	else if(ch==6)
	last_delete();
	else if(ch==7)
	anypos_insert();

	else if(ch==8)
	break;	
	else
	printf("Wrong choice.");
	}
}
