// Remove loop in the linked list 
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
// void print(Node* );
void InsertAtTail(Node* &tail, Node* &head, int d){
    Node* newNode= new Node(d);
    if(tail==NULL){
        tail=newNode;
        head=tail;
        tail->next=head;
    }
    else{
        tail->next=newNode;
        tail=newNode;
        tail->next=head;
    }
}
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;

}
Node* removeloop(Node* head, int sp){
    int cnt=0;
    Node* temp= head;
    while(temp!=NULL){
        if(temp->next->data==sp){
            cnt++;
            if(cnt==2){
                temp->next==NULL;
                break;
            }    
        }     
        temp=temp->next;
    }
    cout<<"Loop removed! this is your linked list: "<<endl;
    return temp;
}

void removeLoop(Node* head){
    Node* temp=head;
    if(temp==NULL){ 
        cout<<"Loop is not present, so chill!"<<endl;
        return;
    }
    map<Node*, bool> visited;
    while(temp!=NULL){
        if(visited[temp]==true){
            cout<<"loop found removing it..."<<endl;
            print(removeloop(head, temp->data));
            return;
        }
        visited[temp]=true;
        temp=temp->next;
    }

    cout<<"Loop is not present, so chill!"<<endl;
}

int main(){
    Node* tail=NULL;
    Node* head=NULL;
    for(int i=0; i<=100; i+=10) InsertAtTail(tail, head, i);
    detectLoop(head);
    return 0;
}