#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* left;
	struct node* right;
};
struct node* newnode(int newdata)
{
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->data=newdata;
	node->left=NULL;
	node->right=NULL;
	return (node);
}
void inorder(struct node* node)    // left root right
{
	if(node==NULL)
	return;
	inorder(node->left);    // left
	printf("%d",node->data);   // root 
	inorder(node->right);     //right
}

void preorder(struct node* node)
{
	if(node==NULL)
	return;
	printf("%d",node->data);
	preorder(node->left);
	preorder(node->right);
}

void postorder(struct node* node)
{
	if(node==NULL)
	return;
	postorder(node->left);
	postorder(node->right);
	printf("%d",node->data);
	
}


int main()
{
	
	struct node* root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->right->right=newnode(5);
	
	printf("\n inorder");
	inorder(root);
	printf("\n preorder");
	preorder(root);
	printf("\n postorder");
	postorder(root);
	
	
}
