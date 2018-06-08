//https://www.geeksforgeeks.org/binary-search-tree-set-1-search-and-insertion/
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct node* newnode(int newdata)
{
	struct node* temp= new node;
	temp->data=newdata;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
void inorder(struct node* root)
{
	if(root==NULL)
	return;
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}

struct node* insert(struct node* node,int key)
	{
		if(node==NULL)
		return newnode(key);
		
		if(key< node->data)
		node->left=insert(node->left,key);
		else if(key > node->data)
		node->right=insert(node->right,key);
		
		return node;
	}

int main()
	{
		struct node* root=NULL;
		root=insert(root,50);
		insert(root,30);
		insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
  
  inorder(root);
	}

