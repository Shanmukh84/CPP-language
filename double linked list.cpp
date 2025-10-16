#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node*prev;
	int data;
	struct node*next;
}*head=NULL;
void create_dll()
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->prev=temp->next=NULL;
	printf("\nenter data in node:");
	scanf("%d",&temp->data);
	if (head==NULL)
	{
		head=temp
	}
	else
	{
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
	void display()
	{
     struct node*ptr;
     ptr=head;
     if(head==NULL)
     {
     	
     	printf("%d",ptr->data);
     	ptr=ptr->next;
	 }
	}




int main()
{
	int ch;
	while(1)
	{
		printf("\n0.exit\n1.create\n2.display");
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
						display();
						break;
					}
					case 0:
						{
							exit()
							break;
						}
		}
	}
}
