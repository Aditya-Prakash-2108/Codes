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
bool CheckForCircularLL(Node* head){
    Node* temp=head;
    if(head==NULL){
        return true;
    }
    do{
        if(head->next==head){
            return true;
        }
        head=head->next;
        if(head->next==NULL)
            return false;
        if(head==temp)
            return true;
    }while(head!=temp);

    return true;
}
void InsertAtTail(Node* &tail, Node* &head, int d){
    Node* newNode=new Node(d);
    if(tail==NULL){
        tail=newNode;
        tail->next=newNode;
        head=tail;
    }
    else{
        tail->next=newNode;
        tail=newNode;
        tail->next=head;
    }
}
void print(Node* head){
    Node* temp=head;
    if(head==NULL){
        cout<<"Empty List"<<endl;
        return;
    }
    cout<<head->data<<" ";
    head=head->next;
    while(1){
        if(head==temp)
            break;
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    
    Node* head=NULL;
    Node* tail=NULL;
    for(int i=0; i<=120; i+=10){
        InsertAtTail(tail, head, i);
    }
    print(head);
    cout<<"Is the given linked list circular or not: ";
    cout<<CheckForCircularLL(head);
    return 0;
}