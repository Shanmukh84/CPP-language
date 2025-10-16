#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node*prav;
	int data;
	struct node*next;
}*head=NULL;
void create_dll(){
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->prav=temp->next=NULL;
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
		temp->prav=ptr;
		
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
	 	printf("%d",ptr->data);
	 	ptr=ptr->next;
	 }
	 printf("NULL");
}
}





int main()
{
	int ch;
	while(1){
		printf("\n0.exit \n1.create \n2.display \n enter your choice");
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
		}
	}
}
