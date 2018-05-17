#include<bits/stdc++.h>
#define lli  long long int
#define loop(i,n) for(int i=0;i<(n);i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define p(a)  printf("%lld",a)
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
lli t;
cin>>t;
while(t--)
		  {
		  lli n;
		  cin>>n;
		  lli a[n],i;
		  loop(i,n)
		  cin>>a[i];
		  lli k,flag=0;
		  cin>>k;
		  i=0;lli j=n-1;
		  while(i<j)
		  {
		  	if(a[i]+a[j]>k)
		  	j--;
		  	else if(a[i]+a[j]<k)
		  	i++;
		  	else 
		  	{
		  		flag=1;
		  		break;
			  }
		  }
		  if(flag)
		  cout<<"yes";
		  else
		  cout<<"no";
		     }
}

