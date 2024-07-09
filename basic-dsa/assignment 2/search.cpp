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
    }
}

void search_index_by_value(Node *&head, long long int val){
    int index=0;
    bool found=false;
    
    Node *tmp = head;
    while(tmp!=NULL){
        if(val==tmp->val) {found=true; break;}
        index++;
        tmp=tmp->next;
    }
    if(found) cout<<index<<endl;
    else cout<<-1<<endl;
}

int main() {
    int t; cin>>t;
    while(t--){
        Node *head = NULL;
        Node *tail = NULL;
        
        input_linked_list(head, tail);
        long long int  val; cin>>val;
        search_index_by_value(head, val);
    }
    
    return 0;
}