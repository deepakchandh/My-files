#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node* left;
	struct node* right;
};
 
 struct node *newnode(int newdata)
 	{
 		struct node* temp=new node;
 		temp->data=newdata;
 		temp->left=NULL;
 		temp->right=NULL;
 		return (temp);
	 }
	 
	 void levelorder(struct node* root)
	 	{
	 		if(root==NULL)
	 		return;
	 			queue<node*>q;
	 			q.push(root);
	 			
	 			while(!q.empty())
	 			{
	 				struct node* node=q.front();
	 				cout<<node->data<<" ";
	 				q.pop();
	 				
	 				if(node->left!=NULL)
	 				q.push(node->left);
	 				if(node->right!=NULL)
	 				q.push(node->right);
				 }
		 }
	 
int main()
	{
		struct node* root=newnode(1);
		root->left=newnode(2);
		root->right=newnode(3);
			root->left->left=newnode(4);
		root->right->right=newnode(5);
		
		levelorder(root);
		
		 }	 
