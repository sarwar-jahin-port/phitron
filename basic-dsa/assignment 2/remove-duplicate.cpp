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

void input_linked_list(Node *&head, Node *&tail, vector<int> &f){
    while(true){
        long long int val; cin>>val;
        if(val==-1) break;
        f[val]++;
        if(f[val]==1){
            Node *newNode = new Node(val);
            if(head==NULL && tail==NULL){
                head=newNode;
                tail=newNode;
            }
            tail->next = newNode;
            tail=newNode;
        }
    }
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    vector <int> f(1000, 0);
    
    input_linked_list(head, tail, f);
    
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    
    return 0;
}