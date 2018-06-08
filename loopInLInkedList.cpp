#include<iostream>     //https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/
using namespace std;
struct node{
	int data;
	struct node* next;
};

void push(struct node** head_ref,int newdata)
{
		struct node* new_node=new node; // (struct node*)malloc(sizeof(struct node))
		new_node->data=newdata;
		new_node->next=(*head_ref);
		(*head_ref)=new_node;
}
bool detectloop(struct node *list)
	{
		struct node *slow_p=list,*fast_p=list;
			while (fast_p && fast_p->next)
    {
        if (slow_p == fast_p)
            return 1;
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
    }	
		return 0;
	}



int main()
{
	struct node* head=NULL;
	push(&head,20);
	push(&head, 4);
    push(&head, 15);
    push(&head, 10);
 // create a loop for testing
 head->next->next->next->next = head;
   if( detectloop(head))
   cout<<"yes";
   else
   cout<<"NO";
   
}
