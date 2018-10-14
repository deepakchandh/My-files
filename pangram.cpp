#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
 string s1;
    int flag=0;
    getline(cin,s1);
    int a[26]={};
    for(int i=0;i<s1.length();i++)
        {
        if(isalpha(s1[i]))
           {
               s1[i]=tolower(s1[i]);
               a[s1[i]-'a']++;
           }
    }
    for(int i=0;i<26;i++)
        {
        if(a[i]==0)
            flag=1;
    }

    if(flag==1)
        cout<<"not pangram";
    else 
        cout<<"pangram";
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

