#include<bits/stdc++.h>
#define lli  long long int
#define loop(i,n) for(int i=0;i<(n);i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define p(a)  printf("%lld",a)
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
fast;
int n=5,m=15;
lli i,a[m]={};
a[n]=1,a[n-1]=1;
for(i=n+1;i<m;i++)
a[i]=2*a[i-1]-a[i-n-1];
loop(i,m)
cout<<a[i]<<" ";

}

