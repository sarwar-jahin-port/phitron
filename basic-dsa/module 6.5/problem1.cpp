// Question: Take a singly linked list as input and print the size of the linked list. 

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

int main(){ 
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
    cout<<count;
    return 0;
}