// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node *next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};

void insert_at_tail(Node * &head, int v){
    Node *newNode = new Node(v);
    if(head==NULL){
        head = newNode;
        return;
    }
    
    Node *tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    
    tmp->next = newNode;
}

void print_linked_list(Node *head){
    cout<<"Your linked list: ";
    Node *tmp = head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

void insert_at_position(Node *&head, int pos, int v){
    Node *newNode = new Node(v);
    if(head==NULL && pos==0) {head = newNode; return;}
    if(pos==0){
        newNode->next = head;
        head=newNode;
        return;
    }
    Node *tmp = head;
    for(int i=1; i<=pos-1; i++){
        tmp=tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void delete_from_position(Node * &head, int pos){
    if(head==NULL) {
        cout<<"Nothing to delete"<<endl;
        return;
    }    
    if(pos==0 && head->next == NULL){
        head = NULL;
        return;
    }
    
    Node *tmp = head;
    for(int i=1; i<=pos-1; i++){
        tmp=tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

int main() {
    Node *head = NULL;
    while(true){
        cout<<"Option 1: Insert a value."<<endl;
        cout<<"Option 2: Print the linked list"<<endl;
        cout<<"Option 3: Insert a position."<<endl;
        cout<<"Option 4: Delete from position."<<endl;
        cout<<"Option 5: Terminate."<<endl;
        
        cout<<"Please choose an option: ";
        int op; cin>>op;
        
        if(op==1){
            cout<<endl<<"Please insert a value: ";
            int val; cin>>val;
            insert_at_tail(head, val);
        }
        else if(op==2){
            print_linked_list(head);
        }
        else if(op==3){
            cout<<"Insert position: ";
            int pos; cin>>pos;
            cout<<endl<<"Insert Value: ";
            int val; cin>>val;
            cout<<endl;
            insert_at_position(head, pos, val);
        }
        else if(op==4){
            cout<<"Insert position: ";
            int pos; cin>>pos;
            delete_from_position(head, pos);
        }
        else if(op==5){
            break;
        }
    }

    return 0;
}