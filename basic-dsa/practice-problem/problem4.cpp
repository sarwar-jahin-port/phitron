#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    stack<int> st;
    
    for(int i=0; i<n; i++){
        int x; cin>>x;
        st.push(x);
    }
    int p; cin>>p;
    
    for(int i=0; i<n-p; i++){
        st.pop();
    }
    cout<<st.top();
    return 0;
}