// creation of binary tree
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int d){
            this -> data = d;
            this -> left = NULL;
            this -> right = NULL;
        }
};
Node* buildtree(Node* root){
    cout << "Enter the data: " << endl;
    int d;
    cin >> d;
    root = new Node(d);

    if(d==-1) return NULL;

    cout << "Enter the data for left node of: " << d << endl;
    root -> left = buildtree(root -> left);
    cout << "Enter the data for right node of: " << d << endl;
    root -> right = buildtree(root -> right);

    return root;

}

void LevelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            // purana level complete traverse ho chuka hai!
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp -> data << " ";
            if(temp -> left){
                q.push(temp -> left);
            }

            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }    
}

int main(){
    Node* root = NULL;
    root = buildtree(root);
    cout << "Level Order Traversal of the tree is: " << endl;
    LevelOrder(root);
    return 0;
}
// 6 8 7 1 -1 -1 2 -1 -1 10 -1 5 -1 -1 -1
 
/*
         6
        / \
        8
       / \
      7   10
     / \  /\
     1  2 X 5

*/