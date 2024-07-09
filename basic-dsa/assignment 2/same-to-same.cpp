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

int input_linked_list(Node *&head, Node *&tail){
    int length=0;
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
        length++;
    }
    return length;
}

int main() {
        Node *head = NULL;
        Node *tail = NULL;
        
        int length = input_linked_list(head, tail);
        
        Node *headb = NULL;
        Node *tailb = NULL;
        int lengthb = input_linked_list(headb, tailb);
        
        if(length!=lengthb) cout<<"NO"<<endl;
        else{
            Node *tmp = head;
            Node *tmpb = headb;
            
            bool same=true;
            while(tmp!=NULL && tmpb!=NULL){
                if(tmp->val != tmpb->val) {
                    same=false;
                    break;
                }
                tmp=tmp->next;
                tmpb=tmpb->next;
            }
            if(same) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
    
    return 0;
}