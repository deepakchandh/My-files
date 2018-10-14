#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int N,count=0;
    cin >> N;
    vector<int> B(N);
    for(int B_i = 0;B_i < N;B_i++){
       cin >> B[B_i];
    }
    for(int i=0;i<N;i++)
        {
         if(((N==2))&&((B[0]%2)!=(B[1]%2)))
            {
            cout<<"NO";
            goto label;
        } else if((B[i]%2!=0)&&(i+1<N))
            {  B[i+1]+=1;
                count++;
                B[i]+=1;
                count++;
 }
        else if((B[i]%2!=0)&&(i+1==N)){
             cout<<"NO";
            goto label;
        }
                 }
                 cout<<count;
    label : return 0;
}