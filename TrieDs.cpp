//https://www.geeksforgeeks.org/trie-insert-and-search/
#include<bits/stdc++.h> 
using namespace std;

const int alphabet=26;
struct trienode{
	struct trienode* children[alphabet];
	bool isendofword;
};

struct trienode *getnode(void)
	{
		struct trienode* pnode= new trienode;
		pnode->isendofword=false;
		for(int i=0;i<alphabet;i++)
			pnode->children[i]=NULL;			
			
			return pnode;
	}

void insert(struct trienode* root,string key)
	{
		struct trienode *pcrawl=root;
			int index;
		for(int i=0;i<key.length();i++)
			{
				index=key[i]-'a';
				if(!pcrawl->children[index])
					pcrawl->children[index]=getnode();
				
				pcrawl=pcrawl->children[index];
			}
			
			pcrawl->isendofword=true;
	}

bool search(struct trienode* root,string key)
	{
		struct trienode* pcrawl=root;
			int index;
		for(int i=0;i<key.length();i++)
			{
				index=key[i]-'a';
				if(!pcrawl->children[index])
					return false;
					pcrawl=pcrawl->children[index];
			}
			return (pcrawl!=NULL && pcrawl->isendofword);
	}


int main()
{
string keys[]={"the", "a", "there",
                    "answer", "any", "by",
                     "bye", "their"};
                     
     int n = sizeof(keys)/sizeof(keys[0]);                 
		struct trienode* root=getnode();
		
	for(int i=0;i<n;i++)
	insert(root,keys[i]);

	 search(root, "the")? cout << "Yes\n" :
                         cout << "No\n";
}
/*
										root		
									   /   \	
									  t     a 
									  |		|
									  h		n
									  |		| \
									  e		s  y
									/ |		|
									i r		w
									| |		|
									r e		e
											|
											r	   		*/
