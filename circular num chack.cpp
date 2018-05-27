#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool circular(long long int n, long long int check)
{
    long long int a,temp,cnt=-1,res=0,power,temp2;  // cnt=-1 since we need 1 val lesser
    temp=n; 
    temp2=n;
    while(n>0)
    {
        n=n/10;
        cnt+=1;
    }
    //zeros=cnt;
    power=pow(10,cnt);
    //cout<<n<<endl;
    while(cnt--)
    {
    	
        a=temp%10;
        temp=temp/10;
        res=(a*power)+temp;        
        cout<<res<<endl;
    		temp=res;
	    if(res==check)
            return true;
	
    }
            return false;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int n,check;
    cin>>n>>check;
    
    if(circular(n,check))
    cout<<"YES";
    else
        cout<<"NO";
        
    return 0;
}

