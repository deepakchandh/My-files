#include<bits/stdc++.h>
#define lli  long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
const int mod=1e9+7;
int main()
{
lli t;
cin>>t;
	while(t--){
		lli n,i,x,cnt=0;
		cin>>n; 
		lli a[n+1]={0};
		for(i=0;i<n;i++)
			{
				cin>>x;
				if(x<=n)
				a[x]=1;
			}
			for(i=1;i<=n;i++)
			{
				if(a[i]==true)
				cnt++;
			}
		cout<<n-cnt<<endl;
	}
}

