#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
void printlist(struct node *n)
{
	while(n!=NULL)
	{
		printf("%d",n->data);
		n=n->next;
	}
}
void push(struct node** head_ref,int new_data)  //starting position
{
	struct node* new_node= (struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=(*head_ref);
    *head_ref= new_node;

}

void append(struct node **head_ref, int new_data)   //ending position
{
	struct node* new_node= (struct node*)malloc(sizeof(struct node));
	struct node* last= *head_ref;
	new_node->data=new_data;
	new_node->next=NULL; // last node.. next to it is null node
	if(*head_ref==NULL) // if ll is empty then make new node as empty node
	{
		*head_ref=new_node;
		return;
	}
	while(last->next!=NULL)
	 last=last->next;
	 
	 last->next=new_node;
     return;
}

void inspos(struct node* prev_node,int new_data)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=prev_node->next;
	prev_node->next=new_node;
}

int main()
 {
 	struct node* head=NULL;
    struct node* second=NULL;
    struct node* third=NULL;
    
    head= (struct node*)malloc(sizeof(struct node));
    second= (struct node*)malloc(sizeof(struct node));
    third= (struct node*)malloc(sizeof(struct node));
    
    head->data=1;
    head->next=second;
    
    second->data=2;
    second->next=third;
    
    third->data=3;
    third->next=NULL;
    inspos(head->next,4);
    printf("\n");
	printlist(head);
	printf("\n");
    push(&head,10); //head pos
    printlist(head);
     append(&head,16); // end pos
     printf("\n");
    printlist(head);
		return 0;
    
 }
