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

int input_linked_list(Node *&head, Node *&tail){
    int length=0;
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
        tail=newNode;
        length++;
    }
    return length;
}

void print_linked_list(Node *head){
    Node *tmp = head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

bool is_duplicate(Node *head1, Node *head2){
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    
    while(tmp1!=NULL){
        if(tmp1->val != tmp2->val){
            return false;
            break;
        }
        tmp1=tmp1->next;
        tmp2=tmp2->next;
    }
    return true;
}

int main() {
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    
    int l1 = input_linked_list(head1, tail1);
    int l2 = input_linked_list(head2, tail2);
    
    if(l1!=l2) cout<<"NO"<<endl;
    else{
        if(is_duplicate(head1, head2)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    // print_linked_list(head1);
    // print_linked_list(head2);
    
    return 0;
}