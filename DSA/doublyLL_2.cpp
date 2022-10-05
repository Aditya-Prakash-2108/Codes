// here we will learn how to delete a node from doubly linked list
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next=NULL;
        Node* prev=NULL;
        Node(int data){
            this->data=data;
            this->prev=NULL;
            this->next=NULL;
        }
        ~Node(){
            if(next!=NULL){
                delete next;
                next=NULL;
            }
            if(prev!=NULL){
                delete prev;
                prev=NULL;
            }
            cout<<"The pointer with the data value "<<this->data<<" has been successfully deleted"<<endl;
        }
};
void DeleteFromHead(Node* &head){
    Node* temp=head;
    head=head->next;
    head->prev=NULL;
    temp->next=NULL;
    delete temp;
}
void DeleteFromTail(Node* &tail){
    Node* temp=tail;
    tail=tail->prev;
    tail->next=NULL;
    temp->prev=NULL;
    delete temp;
}
void DeleteFromPosition(Node* &tail, Node* &head, int p){
    if(p==0){
        DeleteFromHead(head);
        return;
    }
    Node* temp=head;
    while(p--){
        temp=temp->next;
    }
    if(temp==tail){
        DeleteFromTail(tail);
        return;
    }
    Node* before=temp->prev;
    Node* after=temp->next;
    before->next=after;
    after->prev=before;
    temp->next=NULL;
    temp->prev=NULL;
    delete temp;
}
void InsertAtTail(Node* &tail, Node* &head, int d){
    Node* newNode= new Node(d);
    if(tail==NULL){
        tail=newNode;
        head=tail;
    }
    else{
        tail->next=newNode;
        newNode->prev=tail;
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
    Node* tail= NULL;
    for(int i=0; i<=8; i++){
        InsertAtTail(tail, head, i);
    }
    print(head);
    // DeleteFromTail(tail);
    // print(head);
    // DeleteFromHead(head);
    // print(head);
    DeleteFromPosition(tail,head,8);
    print(head);
    cout<<"Head: "<<head->data<<" Tail: "<<tail->data<<endl;
    return 0;
}