// last node is further connected to the first node which will form a circle
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
        ~Node(){
            if(next!=NULL){
                delete next;
                next=NULL;
            }
            cout<<"The Node consisting data "<<this->data<<" has been successfully deleted!"<<endl;
        }
};
void InsertNode(Node* &tail, int d){
    Node* newNode=new Node(d);
    if(tail==NULL){
        tail=newNode;
        tail->next=tail;
    }
    else{
        Node* temp=tail->next;
        tail->next=newNode;
        newNode->next=temp;
        tail=newNode;
    }
}
void InsertAtValue(Node* tail, int val, int d){
    Node* newNode= new Node(d);
    while(tail->data!=val){
        tail=tail->next;
    }
    Node* temp=tail->next;
    tail->next=newNode;
    newNode->next=temp;
}
void DeleteNode(Node* &tail, int val){
    if(tail==NULL){
        cout<<"The linked list is empty"<<endl;
    }
    
    Node* element=tail;
    while(1){
        element=element->next;
        if(element->data==val)
            break;
        tail=tail->next;
    }
    tail->next=element->next;
    element->next=NULL;
    delete element;
}
void print(Node* tail){
    Node* temp=tail;
    cout<<tail->data<<" ";
    tail=tail->next;
    while(tail!=temp){
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    cout<<endl;
}
int main(){
    Node* tail=NULL;
    for(int i=0; i<9; i++){
        InsertNode(tail, i);
    }
    // InsertNode(tail,7);
    print(tail); 
    // InsertAtValue(tail, 7, 12);
    // print(tail);
    DeleteNode(tail, 5);
    print(tail);
    return 0;
}