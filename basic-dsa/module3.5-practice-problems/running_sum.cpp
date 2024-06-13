#include <bits/stdc++.h>
using namespace std;

vector<int> running_sum(vector<int> v){
    vector <int> pre(v.size());
    pre[0]=v[0];
    for(int i=1; i<v.size(); i++) {
        pre[i] = pre[i-1] + v[i];
    }
    return pre;
}

int main() {
    int n; cin>>n;
    vector <int> v(n);
    
    for(int i=0; i<n; i++) cin>>v[i];
    
    vector<int> result = running_sum(v);
    
    for(int i=0; i<n; i++) cout<<result[i]<<" ";

    return 0;
}