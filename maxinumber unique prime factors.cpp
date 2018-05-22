#include<bits/stdc++.h> /*https://www.geeksforgeeks.org/maximum-number-unique-prime-factors/ */
#define lli  long long int
#define loop(i,n) for(int i=0;i<(n);i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define p(a)  printf("%lld",a)
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
int maxprimefact(lli n)
	{
		if(n<2)
		return 0;
		bool arr[n+1];
		memset(arr,true,sizeof(arr));
		int prod=1, res=0,p,i;
		for(p=2;p*p<=n;p++)
			{
				if(arr[p]==true)
				{
					for(i=p*2;i<=n;i+=p)
					   arr[i]=false;
					   
					   prod=prod*p;
					   if(prod>n)
					   return res;
					   res++;
				}
			}
			return res;
	}
int main()
{

	lli n;
	cin>>n;
	cout<<maxprimefact(n);
}

