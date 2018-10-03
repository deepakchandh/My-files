#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
bool isPerfectSquare(int a) 
{    
  int sq = sqrt(a);
    if(sq * sq == a)
        return true;
    return false;
} 
int main()
{
long t;
cin>>t;
while(t--)
		  {
				long long n,q,l,r,res;
				cin>>n>>q;
				long long a[n+1],i,j;
				for(i=0;i<n;i++)
				 cin>>a[i];
					while(q--){
						long cnt1=0,cnt2=0,res,it=0,ans;
						  cin>>l>>r;
						for(i=l-1;i<r-1;i++){
							it=0;
							if (isPerfectSquare(a[i]))
							cnt1+=1;
							for(j=i+1;j<r;j++)
							{
								if(it==0){
								res=a[i]&a[j];
					if (isPerfectSquare(res))
								cnt1+=1; 
								ans=res;
								}
								else
								{
									ans=ans&a[j];
						if (isPerfectSquare(ans))
								cnt1+=1;
								}
								it++;
							}
						
						}
					i=r-1;
				if (isPerfectSquare(a[i]))
							cnt1+=1;
						  cout<<cnt1<<endl;
					}	  
		     }
}

