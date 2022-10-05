/* #include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void bst(node* root, int key){
    if(root==NULL){
        return ;
    }
    if(root->data==key){                       
        cout<<"Key found";                      
        return ;                            
        }                                         
    if(root->data > key){                 
        bst(root->left,key);              
    }                                         
    bst(root->right,key);
}
int main(){
    node* root= new node(3);
    root->left=new node(2);
    root->right= new node(7);
    root->left->left=new node(1);
    root->right->left=new node(5);
    root->right->right=new node(8);
    root->right->left->left=new node(4);
    root->right->left->right=new node(6);
    int key;
    cout<<"Enter the key: ";
    cin>>key;
    bst(root,key);
    return 0;
}
/*      3
       / \
      2   7
     /   / \
    1   5   8
       / \   
      4   6 
*/ 
#include<bits/stdc++.h>
using namespace std;
   
class node{
    public:
        int data;
        node* left;
        node* right;
        node(int val){
            data=val;
            left=NULL;
            right=NULL;
        }
};
node* insertion(node* root, int val){
    if(root==NULL){
        return new node(val);
    }
    if(val < root->data){
        root->left=insertion(root->left,val);
    }
    else{
        root->right=insertion(root->right,val);
    }
    return root;
}
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}
int main(){
    node* root=NULL;
    root= insertion(root, 5);
    insertion(root, 1);
    insertion(root, 3);
    insertion(root, 4);
    insertion(root, 2);
    insertion(root, 7);
    inorder(root);
    return 0;
}