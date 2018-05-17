#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n,i,j,t,a[2009],sum,x;
    bool b[4009]={0};
	// your code goes here
	cin>>t;
	while(t--){
	    cin>>n;
	    sum=0;
	    for(i=0;i<=2000;i++) a[i]=0;
	    for(i=0;i<=4000;i++) b[i]=0;
	    for(i=0;i<n;i++){
	        cin>>x;
	        a[x+1000]++;
	        b[2*(x+1000)]=1;
	    }
	    for(i=0;i<=2000;i++){
	        for(j=i;j<=2000;j++){
	            if(b[i+j]==1){
	                if(i==j) sum+=((a[i]*(a[i]-1))/2);
	                else sum+=(a[i]*a[j]);
	               // cout<<i<<" "<<j<<" "<<a[i]*a[j]<<"\n";
	            }
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
 
