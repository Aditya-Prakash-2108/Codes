// here we will try to reverse the linked list given to us
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
        node(int d){
            this->data=d;
            this->next=NULL;
        }
        ~node(){
            if(this->next!=NULL){
                delete next;
                next=NULL;
            }
        }
};
void reverseLL(node* &tail, node* &head){
    node* pos=head;
    tail=head;
    node* temp=head->next;
    tail->next=NULL;
    while(temp!=NULL){
        head=temp;
        temp=head->next;
        head->next=tail;
        tail=head;
    }
    tail=pos;
    pos=NULL;
    delete pos;
    delete temp;
}  
void InsertNode(node* & tail, node* &head, int data){
    node* newNode= new node(data);
    if(tail==NULL){
        tail=newNode;
        head=tail;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
} 
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    node* head=NULL;
    node* tail=NULL;
    InsertNode(tail,head,10);
    InsertNode(tail,head,20);
    InsertNode(tail,head,30);
    InsertNode(tail,head,40);
    InsertNode(tail,head,50);
    print(head);
    cout<<"The reversed linked list will be:"<<endl;
    reverseLL(tail, head);
    print(head);
    return 0;
}