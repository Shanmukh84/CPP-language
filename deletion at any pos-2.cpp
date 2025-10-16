//wap to create single linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
} *head=NULL;
void createlinkedlist()
{
	struct node*temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("\n enter data value in node:");
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
void firstinsert()
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("\n enter data in first node:");
	scanf("%d",&temp->data);
	temp->next=head;
	head=temp;
    printf("\n insert at first node successful");
}
void lastinsert()
{
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("\n enter data in last node:");
	scanf("%d",&temp->data);
	ptr=head;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=temp;
	printf("added node at last of linkedlist successful");
}
void firstdelete()
{
	struct node*ptr;
	ptr=head;
	head=ptr->next;
	free(ptr);
	printf("\n deleted first node successfully");
}
void lastdelete()
{
	struct node *ptr,*temp;
	ptr=head; 
	while(ptr->next->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=NULL;
	free(temp);
	printf("\n deleted last node successfully");
}
void anypos_insert()
{
	int pos,count=0;
	struct node *temp,*ptr;
	ptr=head;
	if(head==NULL)
	{
		printf("\n Linkedlist is empty");	
	}
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("\n Enter data in node:");
	scanf("%d",&temp->data);
	printf("Enter pos");
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
			printf("\n insertion at any position was successfull");
		}
		else
		{
			ptr=head;
			int i;
			for(i=1;i<pos-1;i++)
			{
				ptr=ptr->next;
				ptr->next=temp;
			}
		}
	}
}
void anypos_delete()
{
	int pos,count=0;
	struct node *ptr,*temp;
	ptr=head;
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
		printf("Enter pos");
	scanf("%d",&pos);
	if(pos<1 || pos>count)
	{
		printf("\n invalid pos");
	}
	else
	{
		ptr=head;
		if(pos==1)
		{
			head=ptr->next;	
			printf("%d first node is deleted successfully",ptr->data);
			free(ptr);
		}
		else
		{
			int i;
			for(i=1;i<pos-1;i++)
			{
				ptr=ptr->next;
			}
			temp=ptr->next;
			ptr->next=temp->next;
			printf("%d anypos deleted sucessfully",temp->data);
			free(temp);	
		}
	}
}
void  print_alternate()
{
	struct node*ptr;	
	ptr=head;
	while(ptr!=NULL)
	{
		printf("\d %t",ptr->data);
		if(ptr->next==NULL)
		{
			ptr=ptr->next;
		}
		else
		{
			ptr=ptr->next->next;
		}
		}
	}
	{
		while(ptr!=NULL)
		{
			sum=sum+ptr->data;
			ptr=ptr->next;
		}
		printf("\nthe sum of elements in the linked list")
	}
		printf("\n1.createlinkedlist \n2.display \n3.first_insert \n4.lastinsert \n5.firstdelete \n6.lastdelete \n7.any position_insert \n8.anypos_delete \n9.sum_elements \n10.alternate \n11.exit \n enter your choice:");
		scanf("%d",&ch);
		if(ch==1)
		createlinkedlist();
	    else if(ch==2)
	    displaylinkedlist();
	    else if(ch==3)
	    firstinsert();
	    else if(ch==4)
	    lastinsert();
	    else if(ch==5)
	    firstdelete();
	    else if(ch==6)
	    lastdelete();
	    else if(ch==7)
	    anypos_insert();
	    else if(ch==8)
	    anypos_delete();
	    else if(ch==9)
	    break;
	    else
	    printf("wrong choice entered");
	}
}
