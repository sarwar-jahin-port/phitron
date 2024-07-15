// https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-05/challenges/elimination-2-2

#include <bits/stdc++.h>
using namespace std;

stack<char> clean(stack<char> &st, int&p){
    stack<char> cst;
    
    while(!st.empty()){
        char c = st.top();
        st.pop();
        if(st.empty()){
            cst.push(c);
            return cst;
        }
        if(c=='1' && st.top()=='0'){
            st.pop();
            p++;
        }else{
            cst.push(c);
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
            int p=0, prev=p;
            stack<char> cst = clean(st, p);
            if(prev==p) {cout<<"NO"<<endl; break;}
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