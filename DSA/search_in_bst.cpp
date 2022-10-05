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
node* SearchInBST(node* root, int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(key<root->data){
        return SearchInBST(root->left,key);
    }
    return SearchInBST(root->right,key);
}
int main(){
    node* root= new node(4);
    root->left=new node(2);
    root->right=new node(5);
    root->left->left=new node(1);
    root->left->right=new node(3);
    root->left->left=new node(1);
    root->right->right=new node(6);
    if(SearchInBST(root,11)==NULL){
        cout<<"Key doesn't exist!";
    }
    else{
        cout<<"Key found!";
    }

    return 0;
}
