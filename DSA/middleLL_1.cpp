// we will take two pointers one will move twice as fast as the other.
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int d){
            this->data=d;
            this->next=NULL;
        }

};
void middlenode(Node* head){
    Node* fast=head->next;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL)
            fast=fast->next;
        head=head->next;
    } 
    cout<<"Data at middle node is: "<<head->data;
}
void InsertAtTail(Node* &tail, Node* &head, int d){
    Node* newNode= new Node(d);
    if(tail==NULL){
        tail=newNode;
        head=tail;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
} 
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
} 
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    for(int i=0; i<=100; i+=10){
        InsertAtTail(tail, head, i);
    }
    print(head);
    middlenode(head);
    return 0;
}