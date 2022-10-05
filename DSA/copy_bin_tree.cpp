/*Implementations of Binary Tree menu driven program :
a. Traverse the tree using all the methods i.e. inorder, preorder &
postorder to display the elements in the tree
b. Copying tree
c. Counting the number of nodes in the tree
d. Counting only leaf nodes in the tree.*/
int ctr=0; 

#include <iostream>
using namespace std;
struct Node
{
    Node *left;
    Node *right;
    int data;
};

class BinaryTree
{
private:
    Node *root;
    Node *duplicate;

public:
    BinaryTree() : root(NULL){};
    bool isEmpty()
    {
        return (root == NULL);
    }
    void insert(int item)
    {
        Node *NewLeaf = new Node();
        Node *ParentNode = NULL;
        NewLeaf->left = NULL;
        NewLeaf->right = NULL;
        NewLeaf->data = item;
        if (isEmpty())
        {
            root = NewLeaf;
        }
        else
        {
            Node *ptr = root;
            while (ptr != NULL)
            {
                ParentNode = ptr;
                if (item > ptr->data)
                {
                    ptr = ptr->right;
                }
                else if (item < ptr->data)
                {
                    ptr = ptr->left;
                }
                else
                    cout << "This object already exists in the tree!" << endl;
            }

            //now ptr can tell me where to put the NewLeaf
            if (item > ParentNode->data)
            { //put on the right
                ParentNode->right = NewLeaf;
            }
            else if (item < ParentNode->data)
            { //put on the left
                ParentNode->left = NewLeaf;
            }
        }
    }
    Node *getRoot()
    {
        return root;
    }
    void inorder(Node *root)
    {
        if (root != NULL)
        {
            inorder(root->left);
            cout << root->data << " ";
            ctr++;
            inorder(root->right);
        }
    }
    void postorder(Node *root)
    {
        if (root != NULL)
        {
            postorder(root->left);
            postorder(root->right);
            cout << root->data << " ";
        }
    }
    void preorder(Node *root)
    {
        if (root != NULL)
        {
            cout << root->data << " ";
            preorder(root->left);
            preorder(root->right);
        }
    }
};

int main()
{

    BinaryTree tree;
    cout << "\nWELCOME TO NITJ : Made by Kartikeya Agarwal - 20124046\n";
    int choice;
    while (1)
    {
        cout << "\n\t Press 1 for Insertion of Element\n";
        cout << "\t Press 2 for Traversal of Elements\n";
        cout << "\t Press 3 for Copying of Tree \n";
        cout << "\t Press 4 for Number of Nodes \n";
        cout << "\t Press 5 for Number of Leaf Nodes \n";
        cout << "\t Press 6 to Exit\n";
        cout << " Enter you Choice: \n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the value to be inserted:\n";
            int data;
            cin >> data;
            tree.insert(data);
            cout << "Department Inserted Succesfully!\n";
            break;
        case 2:
            cout << "Enter the position at which the dept needs to be deleted:\n";
            cout << "Inorder Traversal: ";
            tree.inorder(tree.getRoot());
            cout << endl;
            cout << "Postorder Traversal: ";
            tree.postorder(tree.getRoot());
            cout << endl;
            cout << "Preorder Traversal: ";
            tree.preorder(tree.getRoot());
            break;
        case 3:
            cout << "Copying of Binary Tree:";
            void copy(Node* root, Node* duplicate){ 
            duplicate->val=root->val; 
            if(original->left){ 
                Node* nleft=new newNode; 
                nLeft->parent=duplicate; 
                duplicate->nleft=root->left; 
                copy(root->left,duplicate->nleft); 
                
            } 
            if(original->nright){ 
                Node* nright=new Node; 
                nright->parent=duplicate; 
                duplicate->nright=root->right; 
                copy(root->right,duplicate->right); 
            } 
        }

            break;
        case 4:
            cout << "The Number of Nodes = "<<ctr;
            break;
        case 5:
            cout << "The Number of Leaf Nodes = "<<(ctr+1)/2;
            break;
            break;
        case 6:
            cout << "You have Succesfully Exited the program. Thank You!!";
            exit(0);
        default:
            cout << "Wrong Choice\n";
        }
    }
}
