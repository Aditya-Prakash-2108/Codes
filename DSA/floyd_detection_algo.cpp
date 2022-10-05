// Floyd's cycle detection algorithm is used to detect whether there is a cycle in the linked list or not
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
void rl(Node* head, int check){
    Node* temp = head;
    int cnt = 0;
    if(temp -> data == check){
        cnt++;
        temp = temp -> next;
    }
    
    while(cnt < 2){
        if(temp -> next -> data == check) cnt++;
        if(cnt == 2) break;
        temp = temp -> next;
    }
    temp -> next = NULL;
}

void floydDetectLoop(Node* head){
    if(head==NULL)
        return ;
    Node* fast=head;
    Node* slow=head;
    while((slow!=NULL)&&(fast!=NULL)){
        slow=slow->next;
        fast=fast->next;
        if(fast!=NULL)
            fast=fast->next;

        if(slow==fast) break;
    }
    if((slow==NULL)||(fast==NULL)) return ;
    slow=head;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }

    rl(head, fast -> data);
}
// void InsertAtTail_CLL(Node* &tail, Node* &head, int d){
//     Node* newNode= new Node(d);
//     if(tail==NULL){
//         tail=newNode;
//         tail->next=head;
//         head=tail;
//     }
//     else{
//         tail->next=newNode;
//         tail=newNode;
//         tail->next=head;
//     }
// }
void InsertAtTail(Node* &tail, int d){
    Node* newNode= new Node(d);
    if(tail==NULL){
        tail=newNode;
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
    for(int i=0; i<100; i+=10) InsertAtTail(tail, i);
    tail->next=head->next;
    floydDetectLoop(head);
    // if(t==-1) 
    //     cout<<"No loop found in the linked list!"<<endl;
    // else
    //     cout<<"Loop is found in the linked list and Data at the starting node of the loop is: "<<t<<endl;
    print(head);
    return 0;
}