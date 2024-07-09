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

int main() {
    Node *head = NULL;
    Node *tail = NULL;
        
    int t, length=0; cin>>t;
    while(t--){
        int x, v; cin>>x>>v;
        
        if(x==0){
            Node *newNode = new Node(v);
            if(head==NULL && tail==NULL){
                head=newNode;
                tail=newNode;
            }else{
                newNode->next = head;
                head=newNode;   
            }
            length++;
        }
        else if(x==1){
            Node *newNode = new Node(v);
            if(head==NULL && tail==NULL){
                head=newNode;
                tail=newNode;
            }else{
                tail->next = newNode;
                tail=newNode;
            }
            length++;
        }
        else if(x==2){
            // cout<<"pos: "<<v<<endl;
            // cout<<"length: "<<length<<endl;
            if(v<=length-1){
                if(v==0){
                    Node *deleteNode = head;
                    head=head->next;
                    if(head==NULL) tail==NULL;
                    delete deleteNode;
                }else{
                    Node *tmp=head;
                    for(int i=0; i<v-1; i++){
                        tmp=tmp->next;
                    }   
                    Node *deleteNode = tmp->next;
                    tmp->next = tmp->next->next;
                    if(deleteNode->next == NULL){
                        tail=tmp;
                    }
                    if(deleteNode==head){
                        head=NULL;
                        tail=NULL;
                    }
                    delete deleteNode;
                }
                length--;
            }
        }
        
        Node *tmp=head;
        while(tmp!=NULL){
            cout<<tmp->val<<" ";
            tmp=tmp->next;
        }
        cout<<endl;
    }
    
    return 0;
}