// Problem link: https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-05/challenges/same-or-not-4

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

int main() {
    int n, m; cin>>n>>m;
    
    Node *stackHead = NULL;
    Node *stackTail = NULL;
    Node *queueHead = NULL;
    Node *queueTail = NULL;
    
    for(int i=0; i<n; i++){
        int val; cin>>val;
        Node *newNode = new Node(val);
        if(stackHead == NULL){
            stackHead = newNode;
            stackTail = newNode;
        }else{
            stackTail->next = newNode;
            newNode->prev = stackTail;
            stackTail = newNode;
        }
    }
    
    for(int i=0; i<m; i++){
        int val; cin>>val;
        Node *newNode = new Node(val);
        if(queueHead == NULL){
            queueHead = newNode;
            queueTail = newNode;
        }else{
            queueTail->next = newNode;
            newNode->prev = queueTail;
            queueTail = newNode;
        }
    }
    
    if(n==m){
        bool equal = true;
        for(int i=0; i<n; i++){
            if(stackTail->val != queueHead->val){
                equal = false;
                break;
            }
            if(stackHead->next == NULL){
                break;
            }else{
                Node *del = stackTail;
                stackTail->prev->next = NULL;
                stackTail = stackTail->prev;
                delete del;
            }
            if(queueTail->prev == NULL){
                break;
            }else{
                Node *del = queueHead;
                queueHead->next->prev = NULL;
                queueHead = queueHead->next;
                delete del;
            }
        }
        if(equal) cout<<"YES";
        else cout<<"NO";
    }else{
        cout<<"NO";
    }
    
    return 0;
}