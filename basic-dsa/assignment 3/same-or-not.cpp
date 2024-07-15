// problem link: https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-05/challenges/same-or-not-ii/submissions/code/1380077524
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin>>n>>m;
    stack<int> st;
    queue<int> q;
    
    for(int i=0; i<n; i++){
        int val; cin>>val;
        st.push(val);
    }
    for(int i=0; i<m; i++){
        int val; cin>>val;
        q.push(val);
    }
    
    if(n==m){
        bool equal = true;
        for(int i=0; i<n; i++){
            if(st.top()!=q.front()){
                equal = false;
                break;
            }
            st.pop();
            q.pop();
        }
        if(equal) cout<<"YES";
        else cout<<"NO";
    }else{
        cout<<"NO";
    }
    
    return 0;
}