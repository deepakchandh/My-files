#include<iostream>
using namespace std;
int main()
{
	int n,i,j,temp;
	cin>>n; int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i+=2)  //odd positions
	{
		for(j=i+2;j<n;j+=2)
		{
			if(a[i]<a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
			
		}
	}
	for(i=1;i<n;i+=2)  //even positions
	{
		for(j=i+2;j<n;j+=2)
		{
			if(a[i]>a[j])  
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
			
		}
	}
	
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	
}
