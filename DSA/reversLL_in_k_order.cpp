// reverse the linked list in k order
// time complexity O(n)
// space complexity O(n)
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
Node* kReverse(Node* head, int k){
    // base case
    if((head==NULL)){
        return NULL;
    }
    // step 1: return first k nodes
    Node* forw=NULL;
    Node* curr= head;
    Node* prev=NULL;
    int count=0;

    while((curr!=NULL) && (count<k)){
        forw=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forw;
        count++;
    }

    // step 2: Recusion dekh lega aage ka

    if(forw!=NULL){
        head->next= kReverse(forw, k);
    }

    // step3: Return head of reversed list
    return prev;
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
    for(int i=0; i<=120; i+=10){
        InsertAtTail(tail, head, i);
    }
    print(head);
    int k;
    cout<<"Enter the value of K: ";
    cin>>k;
    cout<<"The Kth order reversed Linked List is: "<<endl;
    print(kReverse(head, k));
    return 0;
}