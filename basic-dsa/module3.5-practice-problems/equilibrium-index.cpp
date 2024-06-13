#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> v(n), pre(n);

    for(int i=0; i<n; i++) {
        cin>>v[i];
        if(i) pre[i]=pre[i-1]+v[i];
        else pre[i]=v[i];
    }

    // for(int i=0; i<n; i++) cout<<pre[i]<<" ";
    // cout<<endl;

    for(int i=0; i<n-1; i++){
        // cout<<pre[i]<<" "<<"== "<<pre[n-1]<<"-"<<pre[i+1]<<" ="<<(pre[n-1]-pre[i+1])<<endl;
        if(pre[i]==(pre[n-1]-pre[i+1])){
            cout<<i+1<<endl;
            break;
        }
    }
    
    return 0;
}