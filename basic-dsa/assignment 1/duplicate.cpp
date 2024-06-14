#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<long long int> v(n);
    bool printed=false;

    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    if(n==1) {cout<<"NO"; printed=true;}
    
    sort(v.begin(), v.end());

    for(int i=0; i<n-1; i++) {
        if(v[i]==v[i+1]) {
            cout<<"YES";
            printed=true;
            break;
        }
    }
    if(!printed) cout<<"NO";

    return 0;
}