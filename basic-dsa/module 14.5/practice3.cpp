#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s1, s2;
    
    int n1; cin>>n1;
    for(int i=0; i<n1; i++){
        int x; cin>>x;
        s1.push(x);
    }
    
    while(!s1.empty()){
        int val = s1.top();
        s1.pop();
        s2.push(val);
    }
    while(!s2.empty()){
        int val = s2.top();
        cout<<val<<" ";
        s2.pop();
        s1.push(val);
    }
    return 0;
}