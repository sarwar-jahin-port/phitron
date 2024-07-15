// https://docs.google.com/document/d/1RwS6-C13mup4cjAxo2QtP29yQoYws8Nhm9tJXHMoDf4/edit?fbclid=IwZXh0bgNhZW0CMTAAAR0oZj-YNXA6Z9kQMrh0_IiqV-TN5VNSYYZV9t3_lDCMvUT_tdYkpLNNyjw_aem_3q0zkSncusKAttZ3tSW8QA

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> v(n);
    
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    
    bool found=false;
    for(int i=1; i<n-1; i++){
        if(v[i]<v[i-1] && v[i]<v[i+1]){
            cout<<v[i]<<endl;
            found=true;
        }
    }
    if(!found) cout<<0<<endl;
    return 0;
}