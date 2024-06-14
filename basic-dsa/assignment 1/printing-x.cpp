#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int mid = n/2;

    for(int i=0; i<n/2; i++){
        for(int j=0; j<n; j++){
            if(j==i) cout<<"\\";
            else if(j==(n-i-1)) cout<<"/";
            else cout<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<=n/2; i++){
        if(i==((n/2))) cout<<"X";
        else cout<<" ";
    }
    cout<<endl;
    for(int i=n/2-1; i>=0; i--){
        for(int j=0; j<n; j++){
            if(j==i) cout<<"/";
            else if(j==(n-i-1)) cout<<"\\";
            else cout<<" ";
        }
        if(i!=0)cout<<endl;
    }
    return 0;
}