#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node *prev;
        Node *next;
        Node(int val){
            this->val = val;
            this->prev = NULL;
            this->next = NULL;
        }
};

class myStack{
    public:
        Node *head = NULL;
        Node *tail = NULL;
        int sz=0;
        
        void push(int val){
            sz++;
            Node *newNode = new Node(val);
            if(head==NULL){
                head = newNode;
                tail = newNode;
                return;
            }
            tail->next = newNode;
            newNode->prev = tail;
            tail=newNode;
        }
        
        void pop(){
            sz--;
            Node *deleteNode = tail;
            tail = tail->prev;
            if(tail==NULL){
                head = NULL;
                delete deleteNode;
                return;
            }
            tail->next = NULL;
            delete deleteNode;
        }
        
        int top(){
            return tail->val;
        }
        
        int size(){
            return sz;
        }
        
        bool empty(){
            if(sz==0) return true;
            else return false;
        }
};
int main() {
    myStack s1, s2;
    
    int n1; cin>>n1;
    for(int i=0; i<n1; i++){
        int x; cin>>x;
        s1.push(x);
    }
    
    int n2; cin>>n2;
    for(int i=0; i<n2; i++){
        int x; cin>>x;
        s2.push(x);
    }
    
    if(n1==n2){
        int i;
        for(i=0; i<n1; i++){
            if(s1.top()!=s2.top()){
                cout<<"NO";
                break;
            }
            s1.pop();
            s2.pop();
        }
        if(i==n1) cout<<"YES";
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}