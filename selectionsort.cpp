#include<bits/stdc++.h>
#define lli  long long int
#define loop(i,n) for(int i=0;i<(n);i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define p(a)  printf("%lld",a)
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

void selectionsort(lli a[],lli n)
{
	lli i,j,min_inx;
	for(i=0;i<n-1;i++)
	{
		min_inx=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min_inx]>a[j])
			min_inx=j;
		}
		swap(a[min_inx],a[i]);
	}
}

int main()
{

fast;
lli n,i;
cin>>n; lli a[n];
loop(i,n)
cin>>a[i];
  selectionsort(a,n);
  loop(i,n)
  cout<<a[i]<<" ";
}

