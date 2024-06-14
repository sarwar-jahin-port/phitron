#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());

    int q; cin>>q;
    while(q--){
        int x; cin>>x;
        int l=0, r=n-1;
        bool found=false;
        while(l<=r){
            int mid = (l+r)/2;
            if(v[mid]==x){
                found=true;
                break;
            }
            if(v[mid]>x) r=mid-1;
            else l=mid+1;
        }
        if(found) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}