#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void printlist(struct node* n)
{ int count=0;
	while(n!=NULL)
	{
		printf("%d",n->data);
		n=n->next;
		count+=1;
	}
	printf("\n");
	printf("%d\n",count);
}
void swap(struct node** head_ref, int x,int y)
{
	if(x==y) // if they're same
	return;
	
	struct node* prevx=NULL;
    struct node* currx=*head_ref;
	while(currx && currx->data!=x)  // to find X
	{
		prevx=currx; 
		currx=currx->next;
	}
	 struct node* prevy=NULL;
	 struct node* curry=*head_ref;
	 while(curry && curry->data!=y)  // to find Y
	 {
	 	prevy=curry; 
		 curry=curry->next;
	 }
	 // if X and Y ain't present
	 if(currx==NULL || curry==NULL)
	 return;
	 if(prevx!=NULL) // if X is not the head of LL
	 prevx->next=curry;
	 else
	 *head_ref=curry; // else make Y as head
	 
	 if(prevy!=NULL)
	 prevy->next=currx;
	 else
	 *head_ref=currx;
	 
	 struct node* temp=curry->next;
	 curry->next=currx->next;
	 currx->next=temp;
}

void push(struct node** head_ref, int new_data)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=*head_ref;
	*head_ref=new_node;
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
			//printlist(head);
			push(&head,4); printf("\n");
			printlist(head);
              swap(&head, 4,2);
              printf("\n");
			printlist(head);
			
}
