#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
} *head=NULL;
void create_cll()
{
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\nenter the node:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		temp->next=head;
	
	}
	else
	{
		ptr=head;
		while(ptr->next!=head)
		{
			ptr=ptr->next;
		}
		ptr->next=NULL;
		ptr->next=temp;
		temp->next=head;
		
		
	}
	
}
void display_cll()
{
	if(head==NULL)
	{
		printf("\ncircular linked list is empty");
	}
	else
	{
		struct node *ptr;
		ptr=head;
		while(ptr->next!=head)
		{
			printf("%d->",ptr->data);
			ptr=ptr->next;
			
		}
		printf("%d->head",ptr->data);
		
	}
}
int count_cll()
{
	struct node *ptr;
	ptr=head;
	if(head==NULL)
	{
		printf("\ncll is empty:");
	}
	else
	{
		int c=0;
		while(ptr->next!=head)
		{
			c++;
			ptr=ptr->next;
		}
		c++;
		return c;
	}
	}
   void last_insert_cll()
{
	create_cll();
}
void first_insert()
{
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter value in node");
    scanf("%d",&temp->data);
    if(head==NULL)
	{
		head=temp;
		temp->next=head;
			}
	else
	{
	  temp->next=head;// Step 5: New node should point to current head

	  ptr=head;
	  while(ptr->next!=head)
	  {
	  	ptr=ptr->next;
	  	
		  }	
		  
		  ptr->next=temp;   // Step 8: Last node now points to new node
		       // Step 9: Update head to the new first node
		  head=temp;
	}
}
void anypos_insert()
{
	struct node *ptr,*temp;
	ptr=head;
	int c=count_cll();
	int pos;
	printf("enter position:");
	scanf("%d",&pos);
	if(pos<1 || pos>c+1)
	{
		printf("invalid position");
		
	}
	else
	{
		if(pos==1)
		{
			first_insert();
		}
		else if(pos>1 && pos<c)
		{
			    temp=(struct node*)malloc(sizeof(struct node));
				printf("enter value in node");
                scanf("%d",&temp->data);
                temp->next=NULL;
                int i;
                for(i=1;i<pos-1;i++)
                {
                	ptr=ptr->next;
				}
				
				temp->next=ptr->next;
				ptr->next=temp;
				}
		else
		{
			last_insert_cll();
			
		}
	}
}



int main()
{
	int ch;
	while(1)
	{
	printf("\n0.exit\n1.create_cll\n2.display_cll\n3.count_cll\n4.last_insert_cll\n5.first_insert\n6.anypos_insert\nenter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			{
				create_cll();
				break;
			}
			case 2:
				{
					display_cll();
					break;
				}
				case 4:
				{
					last_insert_cll();
					break;
				}
				case 5:
				{
					first_insert();
					break;
				}
				case 6:
				{
				    anypos_insert();
					break;
				}
				case 0:
					{
						exit(0);
						break;
					}
					default:
						{
							printf("wrong choice");
							break;
						}
	}
}
}
