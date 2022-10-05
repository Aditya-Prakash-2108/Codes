// In this we are inserting nodes into the linked lists (at all positions)
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
};
void InsertAtHead(Node* &Head, int d){
    Node* temp= new Node(d);
    temp->next=Head;
    Head=temp;
}
void InsertAtTail(Node* head, int d){
    Node* newNode =new Node(d);
    while(head->next!=NULL)
        head=head->next;
    head->next=newNode;
}
void InsertAtPosition(Node* head, int d, int p){
    while(p--)
        head=head->next;
    if(head->next==NULL){
        InsertAtTail(head, d);
        return;
    }
    Node* newNode= new Node(d);
    newNode->next=head->next;
    head->next=newNode;
    // Node* temp=head->next;
    // head->next=newNode;
    // newNode->next=temp;
}
void print(Node* Head){
    Node* temp= Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node * node1=new Node(0);
    // cout<<node1->data<<endl;
    // cout<<node1->next;
    Node* head= node1;
    // InsertAtHead(head, 12);
    // print(head);
    // InsertAtHead(head, 15);
    // print(head);
    // InsertAtTail(head, 9);
    // print(head);
    // cout<<head->data;
    for(int i=1; i<=10; i++){
        if(i==3)
            continue;
        InsertAtTail(head,i);
    }
    print(head);
    int pos=0, data=3;
    if(pos==0){
        InsertAtHead(head, data);
    }
    else
        InsertAtPosition(head,data,pos); // it will not work for first and last values
    print(head);
    return 0;
}