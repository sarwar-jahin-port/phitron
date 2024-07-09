#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        long long int val; 
        Node *next;
        Node(long long int val){
            this->val = val;
            this->next = NULL;
        }
};

void input_linked_list(Node *&head, Node *&tail){
    long long int min=INT_MAX, max=INT_MIN;
    while(true){
        long long int val; cin>>val;
        if(val==-1) break;
        Node *newNode = new Node(val);
        if(head==NULL && tail==NULL){
            head=newNode;
            tail=newNode;
        }
        tail->next = newNode;
        tail=newNode;
        
        if(val<min) min=val;
        if(val>max) max=val;
    }
    cout<<abs(min-max);
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    
    input_linked_list(head, tail);
    return 0;
}