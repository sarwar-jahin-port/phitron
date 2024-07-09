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

void input_at_tail(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void input_at_position(Node *&head, Node *&tail, int pos, int val){
    Node *newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    
    if(pos == 0){
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }
    // if(pos==1){
    //     newNode->prev = head;
    //     head->next = newNode;
    //     return;
    // }
    
    Node *tmp = head;
    
    for(int i=0; i<pos-1; i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next->prev = newNode;
    newNode->prev = tmp;
    tmp->next = newNode;
}

void normal_print(Node *head){
    Node *tmp = head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

void reverse_print(Node *tail){
    Node *tmp = tail;
    
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    
    int length=0, q; cin>>q;
    while(q--){
        int x, v; cin>>x>>v;
        
        if(x>length) cout<<"Invalid"<<endl;
        else if(x==length) {
            input_at_tail(head, tail, v);
            normal_print(head);
            reverse_print(tail);
            length++;
        }
        else{
            input_at_position(head, tail, x, v);
            normal_print(head);
            reverse_print(tail);
            length++;
        }
    }
    
    return 0;
}