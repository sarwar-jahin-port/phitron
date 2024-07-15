#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    queue<int> q, cq;
    
    for(int i=0; i<n; i++){
        int x; cin>>x;
        q.push(x);
    }
    int p; cin>>p;
    
    for(int i=0; i<n; i++){
        if(i==p){
            q.pop();
        }else{
            cq.push(q.front());
            q.pop();
        }
    }
    
    while(!cq.empty()){
        cout<<cq.front()<<" ";
        cq.pop();
    }
    
    return 0;
}