#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin>>s;
    stack<char> st;
    
    for(int i=0; s[i]; i++){
        st.push(s[i]);    
    }
    
    for(int i=0; s[i]; i++){
        cout<<st.top();
        st.pop();
    }
    
    return 0;
}