#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    queue<int> q, q2;
    
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        q.push(x);
    }
    
    while(!q.empty()){
        int val = q.front();
        q.pop();
        s.push(val);
    }
    while(!s.empty()){
        int val = s.top();
        cout<<val<<" ";
        s.pop();
        q2.push(val);
    }
    return 0;
}