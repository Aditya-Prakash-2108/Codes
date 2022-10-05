//  In this we are deleting nodes of the linked lists (from all positions)
#include<bits/stdc++.h>
using namespace std;
   
class Node{
    public:
        int data;
        Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int value= this-> data;
        // memory free ho rhi h!
        if(this->next!= NULL){
            delete next;
            this-> next= NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};
void InsertAtTail(Node* head, int d){
    Node* newNode= new Node(d);
    while(head->next!=NULL){
        head=head->next;
    }
    head->next=newNode;
}
void DeleteFirstNode(Node* &head){
    Node* temp= head;
    head=head->next;
    temp->next=NULL;
    delete temp;
}
void DeleteLastNode(Node* head){
    Node *prev=head, *last=head;
    while(1){
        last=last->next;
        if(last->next==NULL)
            break;
        prev=prev->next;
    }
    prev->next=NULL;
    delete last;
}
void DeleteFromPosition(Node* head, int pos){
    Node* temp=head;
    while(1){
        temp=head->next;
        if(pos==0)
            break;
        head=head->next;
        pos--;
    }
    if(temp->next==NULL){
        DeleteLastNode(head);
        return;
    }
    head->next=temp->next;
    temp->next=NULL;
    delete temp;
}
void print(Node* Head){
    while(Head!=NULL){
        cout<<Head->data<<" ";
        Head=Head->next;
    }
    cout<<endl;
}
int main(){
    Node * node1=new Node(0);
    Node* head= node1;
    for(int i=1; i<=10; i++){
        InsertAtTail(head,i);
    }
    print(head);
    // DeleteLastNode(head);
    // print(head);
    // DeleteFirstNode(head);
    // print(head);
    int pos=0;
    if(pos==0){
        DeleteFirstNode(head);
    }
    else
        DeleteFromPosition(head, pos);

    print(head);
    return 0;
}