#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* left;
	struct node* right;
};

void mirror(struct node* node)
{
	if(node==NULL)
	return;
	else
	{
		struct node* temp;
		
		mirror(node->left);
		mirror(node->right);
		
		temp        = node->left;
    node->left  = node->right;
    node->right = temp;
	}
}


void inorder(struct node* node)
{
	if(node==NULL)
	return;
	inorder(node->left);
	printf("%d",node->data);
	inorder(node->right);
}

struct node* newnode(int newdata)
{
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->data=newdata;
	node->left=NULL;
	node->right=NULL;
}

int main()
{
	struct node *root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	printf("\nInorder");
	inorder(root);
	
	printf("\nMirror");
	mirror(root);
	inorder(root);
	
}
