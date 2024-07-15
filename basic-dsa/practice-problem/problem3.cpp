#include <bits/stdc++.h>
using namespace std;

int main() {
    int q; cin>>q;
    vector<int> v;
    
    while(q--){
        int x, b; cin>>x>>b;
        
        if(x==1){
            if(v.empty()){
                v.push_back(b);
            }else{
                v.insert(v.begin()+1, b);
            }
        }else{
            if(v.empty()){
                v.push_back(b);
            }else{
                v.insert(v.end()-1, b);
            }
        }
    }
    
    for(int x:v) cout<<x<<" ";
    
    return 0;
}