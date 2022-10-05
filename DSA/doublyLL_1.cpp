//it constists of data next and previous pointer
#include<bits/stdc++.h>
using namespace std;
   
class Node{
    public:
        int data;
        Node* prev;
        Node* next;
        Node(int data){
            this->data=data;
            this->prev=NULL;
            this->next=NULL;
        }
};
void InsertAtHead(Node* &head, int d){
    Node* newNode= new Node(d);
    head->prev=newNode;
    newNode->next=head;
    head=newNode;
}
void InsertAtTail(Node* &tail, int d){
    Node* newNode= new Node(d);
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
    // head->next=newNode;
    // newNode->prev=head;
}
void InsertAtPosition(Node* &head, Node* &tail, int d, int p){
    if(p==0){
        InsertAtHead(head,d);
        return;
    }
    Node* pre=head;
    Node* post=head;
    while(p--){
        pre=pre->next;
        post=pre->next;
    }
    if(pre->next==NULL){
        InsertAtTail(tail,d);
        return;
    }
    Node* newNode= new Node(d);
    pre->next=newNode;
    newNode->prev=pre;
    post->prev=newNode;
    newNode->next=post;
}
int getLength(Node* head){
    int len=0;
    while(head!=NULL){
        len++;
        head=head->next;
    }
    return len;
}
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    
    Node* node1= new Node(0);
    Node* head=node1;
    Node* tail=node1;
    // print(head);
    // InsertAtHead(head,5);
    // print(head);
    for(int i=1; i<=10; i++){
        InsertAtTail(tail, i);
    }
    InsertAtPosition(head,tail,2,0);
    print(head);
    cout<<"Lenght of the Doubly Linked List is: "<<getLength(head)<<endl;
    return 0;
} 