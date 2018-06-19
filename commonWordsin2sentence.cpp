#include <bits/stdc++.h>

using namespace std;

int main() {
    int m,flag=0;
    int n;
    cin >> m >> n;
    
    map<string, int> magazine;
    map<string, int> note;
    
    string word;
    
    for(int i = 0; i < m; i++) {
        cin >> word;
        magazine[word]++;
    }
    
    for(int i = 0; i < n; i++) {
        cin >> word;
        if(magazine[word]!=1)
        {
        flag=1;
        cout<<"no";
        break;
        }
    }
    if(flag==0)
    cout<<"yes";
    /*map<string, int> :: iterator it;
    bool success = 1;
    
    for(it = note.begin(); it != note.end(); it++) {
        if(magazine[it->first] < it->second) {
            success = 0;
            break;
        }
    }
    
    if(success) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }*/

    return 0;
}
