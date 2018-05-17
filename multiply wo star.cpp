#include<bits/stdc++.h>
#define lli  long long int
#define loop(i,n) for(int i=0;i<(n);i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define p(a)  printf("%lld",a)
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

int multiply(int a,int b)
{
	int res=0;
	while(b>0)
	{
		if(b&1)
		res=res+a;
		//else
		a=a<<1;
		b=b>>1;
	}
	return res;
}

int main()
{

cout<<multiply(10,15);
}

