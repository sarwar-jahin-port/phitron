#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        bool accending=true;

        for(int i=0; i<n; i++) {
            cin>>v[i];
            if(i && v[i-1]>v[i]) {accending=false;}   
        }
        if(accending) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}