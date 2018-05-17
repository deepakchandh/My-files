#include<bits/stdc++.h>
#define lli  long long int
#define sl(n) scanf("%lld",&n)
#define loop(i,n) for(int i=0;i<(n);i++)
#define p(a)  printf("%lld",a)
#define spa  printf(" ");
#define nl  printf("\n")
using namespace std;
int main()
{
	lli t;
	sl(t);
	while(t--)
	  {  
	  lli n; sl(n);lli a[n],i,currmax,maxsofar;
	  loop(i,n)
	  sl(a[i]);
	  currmax=a[0];maxsofar=a[0];
	  for(i=1;i<n;i++)
	  { currmax=max(currmax,currmax+a[i]);
	   maxsofar=max(currmax,maxsofar);
	  }
	  cout<<maxsofar;
	  }
}


