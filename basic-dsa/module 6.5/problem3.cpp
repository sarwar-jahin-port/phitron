// Question: Take a singly linked list as input and print the middle element. If there are multiple values in the middle print both.

// Question: Take a singly linked list as input and print the middle element. If there are multiple values in the middle print both.

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

void print_value_at(Node *&head, int index){
    Node *tmp=head;
    
    for(int i=0; i<index; i++){
        tmp=tmp->next;
    }
    cout<<tmp->val<<" ";
    return;
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
    if(count%2==0){
        int index=count/2;
        print_value_at(head, index-1);
        print_value_at(head, index);
    }else{
        int index=count/2;
        print_value_at(head, index);
    }
    return 0;
}