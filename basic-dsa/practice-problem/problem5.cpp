#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> v(n), rv;
    
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    
    int max=0;
    for(int i=v.size()-1; i>=0; i--){
        rv.push_back(max);
        if(v[i]>max) max=v[i];
    }
    reverse(rv.begin(), rv.end());
    
    for(int x:rv) cout<<x<<" ";
    return 0;
}