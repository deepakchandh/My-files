#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,n,j;
	cin>>n; char t, a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{ t=a[i];          
		for(j=0;j<n;j++)
		{ if(i==j)          
			cout<<t;   //  printing (\)
			else if(i+j==n-1 && i!=j) //   printing (/)
			cout<<a[j];          // for printing normally use t there
			else
			cout<<" ";
		}
		cout<<"\n";
	}
}
