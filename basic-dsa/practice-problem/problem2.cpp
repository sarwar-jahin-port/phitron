#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> v(n), rv;
    
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    
    int sum=0;
    for(int i=v.size(); i>0; i--){
        if(i==v.size()){
            rv.push_back(sum);
        }else{
            sum+=v[i];
            rv.push_back(sum);
        }
    }
    reverse(rv.begin(), rv.end());
    
    for(int x:rv) cout<<x<<" ";
    
    return 0;
}