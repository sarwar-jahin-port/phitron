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
    Node *head = NULL;
    Node *tail = NULL;
    
    while(true){
        int val; cin>>val;
        if(val==-1) break;
        
        Node *newNode = new Node(val);
        if(head==NULL){
            head = newNode;
            tail = newNode;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    
    Node *i = head;
    Node *j = tail;
    
    while(i!=j && i->next!=j){
        swap(i->val, j->val);
        i=i->next;
        j=j->prev;
    }
    swap(i->val, j->val);
    
    Node *tmp = head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    
    return 0;
}