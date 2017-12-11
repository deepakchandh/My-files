#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void printlist(struct node* n)
{
	while(n!=NULL)
	{
		printf("%d",n->data);
		n=n->next;
	}
}

void push(struct node** head_ref, int new_data)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=*head_ref;
	*head_ref=new_node;
}

void deletenode(struct node** head_ref, int posi)
{
	if(*head_ref==NULL)  //if LL is empty it returns
		return;
	
	struct node* temp=*head_ref;
	if(posi==0)   // for 0th position
	{
		*head_ref=temp->next;
		free(temp); 
		return;
	}
	for(int i=0;temp!=NULL&& i<posi-1;i++) // to find the prev node
	temp=temp->next;
	
	if(temp==NULL||temp->next==NULL) // if pos is more than no of node.. ex. pos 6 node size 4
	return;
	
	struct node* next=temp->next->next;
	free(temp->next);
	temp->next=next;
}
int main()
{
	struct node* head=NULL;
		struct node* second=NULL;
		struct node* third=NULL;
			
		head= (struct node*)malloc(sizeof(struct node));
		second=(struct node*)malloc(sizeof(struct node));
		third=(struct node*)malloc(sizeof(struct node));
		head->data=1;
		head->next=second;
		second->data=2;
		second->next=third;
		third->data=3;
		third->next=NULL;	
			printlist(head);
			push(&head,4); printf("\n");
			printlist(head);
			deletenode(&head, 3);
    puts("\nLinked List after Deletion");
    printlist(head);
			
}
