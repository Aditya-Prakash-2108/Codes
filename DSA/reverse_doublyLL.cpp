// here we will reverse soubly linked list by interchanging all the prev and next pointer
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int d){
            this->data=d;
            this->next=NULL;
            this->prev=NULL;
        }
};
Node* reversedoublyLL(Node* &tail, Node* &head){
    if(head==tail)
        return head;
    
    Node* previous=NULL;
    Node* curr=head;
    Node* forward=head->next;
    while(previous!=tail){
        curr->next=previous;
        curr->prev=forward;
        previous=curr;
        curr=forward;
        if(forward!=NULL)
            forward=curr->next;
    }
    tail=head;
    head=previous;
    return head;

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
    Node* tail=NULL;
    for(int i=0; i<=120; i+=10){
        InsertAtTail(tail, head, i);
    }
    print(head);
    cout<<"Old Head-> "<<head->data<<" Old Tail-> "<<tail->data<<endl;
    cout<<"The reversed doubly linked list is: "<<endl;
    print(reversedoublyLL(tail, head));
    cout<<"New Head-> "<<head->data<<" New Tail-> "<<tail->data<<endl;
    return 0;
}