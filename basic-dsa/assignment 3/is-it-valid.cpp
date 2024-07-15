// https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-05/challenges/is-it-valid-1-1/submissions/code/1380094637

#include <bits/stdc++.h>
using namespace std;

stack<char> clean(stack<char> &st){
    stack<char> cst;
    
    while(!st.empty()){
        char c = st.top();
        st.pop();
        if(st.empty()){
            cst.push(c);
            return cst;
        }
        if(st.top()==c){
            cst.push(c);
        }else{
            st.pop();
        }
    }
    return cst;
}

int main() {
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        stack<char> st;
        
        for(int i=0; s[i]; i++){
            st.push(s[i]);
        }
        
        while(true){
            bool one=false, zero=false;
            stack<char> cst = clean(st);
            if(!cst.empty()){
                while(!cst.empty()){
                    if(cst.top()=='1' && one==false) one=true;
                    if(cst.top()=='0' && zero==false) zero=true;
                    st.push(cst.top());
                    cst.pop();
                }
            }else{
                cout<<"YES"<<endl;
                break;
            }
            if(one && zero){}
            else{
                cout<<"NO"<<endl;
                break;
            }
        }
        
    }

    return 0;
}