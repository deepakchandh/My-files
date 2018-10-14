#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,count=0;
    cin >> n;
    cout<<n<<"\n";
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
      for (int c = 0 ; c < ( n - 1 ); c++)
  {
    for (int d = 0 ; d < n - c - 1; d++)
    {
      if (arr[d] < arr[d+1]) 
      {
       int swap       = arr[d];
        arr[d]   = arr[d+1];
        arr[d+1] = swap;
      }
    }
  }
   /*  for(int arr_i = 0;arr_i < n;arr_i++){
       cout<<arr[arr_i];
    } */
 while(n>0){
     count=0;
    for(int i=0;i<n;i++)
        {
        arr[i]=arr[i]-arr[n-1];
        if(arr[i]>0)
            count++;
    }
     n=count;
     if(count!=0)
    cout<<count<<"\n";
 }
    return 0;
}
