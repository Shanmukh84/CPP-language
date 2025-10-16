#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*head=NULL;

void create_csll(){
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("\nenter the data of node");
	scanf("%d",&temp->data);
	if(head==NULL){
		head=temp;
		temp->next=head;
	}
	else{
		ptr=head;
		while(ptr->next!=head){
			ptr=ptr->next;
		}
		ptr->next=temp;
		temp->next=head;
	}
	printf("\ncreation is sucess");
	
}
void display(){
	if(head==NULL){
		printf("\nlist is empty");
		return;
	}
	else{
		struct node *ptr;
		ptr=head;
		while(ptr->next!=head){
			printf("<-%d->",ptr->data);
			ptr=ptr->next;
		}
		printf("%d->head",ptr->data);
	}
}
void count(){
	int c=0;
	struct node *ptr;
	ptr=head;
	while(ptr->next!=head){
		c++;
		ptr=ptr->next;
	}
	c++;
	printf("\ncount of nodes:%d",c);
}










int main(){
	int ch;

	while(1){
		printf("\n0.exit\n1.create\n2.display\n3.count\n4.last_insert");
		printf("\nenter the choice:");
	scanf("%d",&ch);
	switch(ch){
		case 1:{
			create_csll();
			break;
		}
		case 2:{
			display();
			break;
		}
	
		
		case 0:{
			exit(0);
			break;
		}
		case 3:{
			count();
			break;
		}
		default:{
			printf("\nyou entered wrong choice");
			break;
		}
	}
	}
	return 0;
}
