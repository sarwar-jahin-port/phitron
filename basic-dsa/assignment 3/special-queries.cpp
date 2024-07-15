// https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-05/challenges/special-queries-1-1

#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<string> q;
    int k; cin>>k;
    while(k--){
        int c;
        string n;
        cin>>c;
        
        if(c==0){
            cin>>n;
            q.push(n);
        }else{
            if(q.empty()) cout<<"Invalid"<<endl;
            else{
                cout<<q.front()<<endl;
                q.pop();
            }
        }
    }

    return 0;
}