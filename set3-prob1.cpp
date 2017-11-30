#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,i,len,j;
	string str;
	char t,a[1000];
	cin>>a;
	n=strlen(a);
	for(i=0;i<n+1;i+=2)
	{
		t=a[i];
		if(a[i+2]-48>=0 && a[i+2]-48<=9)
		{
			int x;
			x=(a[i+1]-48)*10+(a[i+2]-48);
			for(j=0;j<x;j++)
			cout<<t;
		i++;
		}
		else{
		for(j=0;j<a[i+1]-48;j++)
		cout<<t;
		}
}
}
