// Question: Take a singly linked list as input, then take q queries. In each query you will be given an index and value. You need to insert those values in the given index and print the linked list. If the index is invalid print “Invalid”.

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node *next;
        Node(int val){
            this->val=val;
            this->next = NULL;
        }
};

void insert_at_position(Node *&head, int p, int v){
    Node *newNode = new Node(v);
    if(p==0) {
        newNode->next = head;
        head=newNode;
        return;
    }
    Node *tmp = head;
    for(int i=1; i<=p-1; i++){
        tmp=tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

int main() {
    Node *head = NULL;
    int count=0;
    while(true){
        int val; cin>>val;
        if(val==-1) break;
        Node *newNode = new Node(val);
        if(head==NULL) head=newNode;
        else{
            Node *tmp=head;
            while(tmp->next!=NULL){
                tmp=tmp->next;
            }
            tmp->next = newNode;
        }
        count++;
    }
    
    int q; cin>>q;
    while(q--){
        int p, v; cin>>p>>v;
        if(p>count) cout<<"Invalid"<<endl;
        else{
            insert_at_position(head, p, v);
            count++;
        }
        Node *tmp = head;
        while(tmp!=NULL){
            cout<<tmp->val<<" ";
            tmp=tmp->next;
        }
    }
    return 0;
}