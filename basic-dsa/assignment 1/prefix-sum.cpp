#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<long long int> v(n), pre(n);

    for(int i=0; i<n; i++) {
        cin>>v[i];
        if(i) pre[i] = pre[i-1] + v[i];
        else pre[i]=v[i];
    }

    for(int i=n-1; i>=0; i--) cout<<pre[i]<<" ";

    return 0;
}