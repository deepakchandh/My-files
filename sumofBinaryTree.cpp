#include<stdio.h> /*   https://www.geeksforgeeks.org/sum-nodes-binary-tree/  */

#include<stdlib.h>
struct node
{
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

int addbt(node* root)
{
	if(root==NULL)
	return 0;
	return (root->data + addbt(root->left) + addbt(root->right));
}


int main()
{
	node* root=newnode(1);
	root->left=newnode(2);
	root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    root->right->left = newnode(6);
    root->right->right = newnode(7);
    root->right->left->right = newnode(8);
    int sum=addbt(root);              //add binary tree
    printf("%d",sum);
    
}
