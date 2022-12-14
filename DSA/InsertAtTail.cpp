#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};    
void InsertAtHead(node* &head, int val){
    node* n= new node(val);
    n->next=head;
    head=n;
}
void InsertATtail(node* &head, int val){
        node* n= new node(val);
        if(head==NULL){
            head=n;
            return;
        }                                                   
        node* temp=head;
        while (temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }
bool search(node* head, int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key)
            return true;
        temp=temp->next;
    }
    return false;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head=NULL;
    int num;
    cin>>num;
    for(int i=1; i<=num; i++){
        InsertATtail(head,i);
    }
    display(head);
    InsertAtHead(head, 4);
    display(head);
    int n=search(head,4);
    cout<<n<<endl;
    return 0;
}