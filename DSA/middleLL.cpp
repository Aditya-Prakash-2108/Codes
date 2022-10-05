// print data of the middle element of linked list
// time complexity O(n)
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
void InsertAtTail(node* &tail, node* &head, int d){
    node* newNode= new node(d);
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
int LengthOfLL(node* head){
    int ctr=0;
    while(head!=NULL){
        ctr++;
        head=head->next;
    }
    return ctr;
}
int MiddleData(node* head){
    int len=LengthOfLL(head);
    len/=2;
    while(len--){
        head=head->next;
    }
    return head->data;
}
int main(){

    node* head=NULL;
    node* tail=NULL;
    for(int i=0; i<=100; i+=10){
        InsertAtTail(tail, head, i);
    }
    print(head);
    cout<<"Data at the middle node is: "<<MiddleData(head)<<endl;
    // cout<<"Length of the linked list is: "<<LengthOfLL(head);
    return 0;
}