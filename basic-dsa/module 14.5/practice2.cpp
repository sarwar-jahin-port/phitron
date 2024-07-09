#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    queue<int> q;
    
    int n1; cin>>n1;
    for(int i=0; i<n1; i++){
        int x; cin>>x;
        s.push(x);
    }
    
    int n2; cin>>n2;
    for(int i=0; i<n2; i++){
        int x; cin>>x;
        q.push(x);
    }
    
    if(n1==n2){
        int i;
        for(i=0; i<n1; i++){
            if(s.top()!=q.front()){
                cout<<"NO";
                break;
            }
            s.pop();
            q.pop();
        }
        if(i==n1) cout<<"YES";
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}