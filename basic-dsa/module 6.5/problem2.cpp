// Question: Take a singly linked list as input and check if the linked list contains any duplicate value. You can assume that the maximum value will be 100.

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

int main() {
    vector<int> f(100,0);
    bool found=false;
    Node *head = NULL;
    int count=0;
    while(true){
        int val; cin>>val;
        if(val==-1) break;
        if(++f[val] >=2) found=true;
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
    
    if(found) cout<<"YES";
    else cout<<"NO";
    return 0;
}