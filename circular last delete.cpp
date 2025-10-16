#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;
void createcll()
{
    struct node *temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the data:");
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
    printf("\nCreation is sucessfully done");
}
void display()
{
    if(head==NULL)
    {
        printf("cll is empty");
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
int count()
{
    struct node *ptr;
    ptr=head;
    if(head==NULL)
    {
        return 0;
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
void lastinsert()
{
    createcll();
}
void firstinsert()
{
    struct node *ptr,*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        temp->next=head;
    }
    else
    {
        temp->next=head;
        ptr=head;
        while(ptr->next!=head)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
        head=temp;
    }
}
void anyposinsert()
{
    struct node *temp,*ptr;
    ptr=head;
    int pos,c;
    printf("\nenter pos:");
    scanf("%d",&pos);
    c=count();
    if(pos<1||pos>c+1)
    {
        printf("invalid pos");
    }
    else
    {
    if(pos==1)
    {
        firstinsert();
    }
    else if(pos>1&&pos<c)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        printf("\nenter data:");
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
        lastinsert();
    }
    }
}
void first_delete()
{
    struct node *ptr,*temp;
    ptr=head;
    temp=head;
    if(head==NULL)
    {
        printf("cll is empty");
    }
    else 
    {
    if(count()==1)
    {
        head=NULL;
    }
    else
    {
        while(ptr->next!=head)
        {
            ptr=ptr->next;
        }
        head=temp->next;
        ptr->next=head;
        printf("deleted %d",temp->data);
        free(temp);
    }
    }
    printf("\nsucessfully deleted");
}
void last_delete(){
	struct node *ptr,*temp;
	ptr=head;
	if(head==NULL){
		printf("\nCLL is empty");
	}
	else{
		if(count()==1){
			head==NULL;
		}
		else{
			while(ptr->next->next!=head){
				ptr=ptr->next;
			}
			temp=ptr->next;
			ptr->next=head;
			printf("\nDeleted %d",temp->data);
			free(temp);
		}
	}
	printf("\nlast deletion is sucess");
	
}
void anypos_delete(){
	int pos,c=count();
	struct node *ptr,*temp;
	printf("\nenter the pos");
	scanf("%d",&pos);
	if(pos<1 || pos>c){
		printf("\nInvalid positon");
		return;
	}
	else{
		if(pos==1){
			first_delete();
		}
		else if(pos>1 && pos<c){
			int i;
			ptr=head;
			for(i=1;i<pos-1;i++){
				ptr=ptr->next;
			}
			temp=ptr->next;
			ptr->next=temp->next;
			free(temp);
		}
		else{
			last_delete();
		}
	}
	printf("\nanypos delete is done");
}
void search()
{
	int key;
	printf("\n enter the key");
	scanf("%d",&key);
	struct node*ptr;
	while(ptr!=head)
	{
		if(ptr->data==key)
	{
		printf("\n key element is found");
	
	}
	else
	ptr=ptr->next;	
	}
	while(ptr!=head);
	printf("\n key not found");
}
int main()
{
    int ch;
    while(1)
    {
        printf("\n0.exit\n1.create linked list\n2.display\n3.nodecount\n4.lastinsert\n5.firstinsert\n6.anyposinsert\n7.firstdelete\n8.lastdelete\n9.anyposdelete\n10.searching\nenter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 0:
            {
                exit(0);
                break;
            }
            case 1:
            {
                createcll();
                break;
            }
            case 2:
            {
                display();
                break;
            }
            case 3:
            {
                printf("node count:%d",count());
                break;
            }
            case 4:
            {
                lastinsert();
                break;
            }
            case 5:
            {
                firstinsert();
                break;
            }
            case 6:
            {
                anyposinsert();
                break;
            }
            case 7:
            {
                first_delete();
                break;
            }
            case 8:{
            	last_delete();
			break;
		  }
		  case 9:{
		  	anypos_delete();
			break;
		  }
		  case 10:{
		  	search();
			break;
		  }
            default:
            printf("wrong choice");
    }
    }
}
