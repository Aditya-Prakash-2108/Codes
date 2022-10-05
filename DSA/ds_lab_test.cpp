#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left, *right;
};

struct node* newNode (int data)
{
    struct node* temp =
(struct node *) malloc(sizeof(struct node));

    temp->data = data;
    temp->left = temp->right = NULL;

    return temp;
}

struct node* constructTreeUtil(int post[], int* postIndex,
                               int data, int min, int max,
                               int size)
{

    if (*postIndex < 0)
        return NULL;

    struct node* root = NULL;

    if (data > min && data < max)
    {

        root = newNode(data);
        *postIndex = *postIndex - 1;

        if (*postIndex >= 0)
        {

        root->right = constructTreeUtil(post, postIndex,
                                        post[*postIndex],
                                        data, max, size );
        root->left = constructTreeUtil(post, postIndex,
                                       post[*postIndex],
                                       min, data, size );
        }
    }
    return root;
}

struct node *constructTree (int post[],
                            int size)
{
    int postIndex = size-1;
    return constructTreeUtil(post, &postIndex,
                             post[postIndex],
                             INT_MIN, INT_MAX, size);
}

void inorder (struct node* node)
{
    if (node == NULL)
        return;

    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}

struct node* insertion(struct node* node, int data){
   if (node == NULL) return newNode(data);
      if (data < node->data)
         node->left = insertion(node->left, data);
      else
         node->right = insertion(node->right, data);
   return node;
}

struct node * minNode(struct node* node){
   struct node* current = node;
   while (current && current->left != NULL)
      current = current->left;
   return current;
}
struct node* deleteNode(struct node* root, int data){
   if (root == NULL) return root;
      if (data < root->data)
         root->left = deleteNode(root->left, data);
      else if (data > root->data)
         root->right = deleteNode(root->right, data);
   else{
      if (root->left == NULL){
         struct node *temp = root->right;
         free(root);
         return temp;
      }
      else if (root->right == NULL){
         struct node *temp = root->left;
         free(root);
         return temp;
      }
      struct node* temp = minNode(root->right);
      root->data = temp->data;
      root->right = deleteNode(root->right, temp->data);
   }
   return root;
}
void preorder(struct node* node)
{
    if (node == NULL)
        return;

    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}

void des (struct node* node)
{
    if (node == NULL)
        return;

    des(node->right);
    cout << node->data << " ";
    des(node->left);
}


int main ()
{
    int post[] = {35,40,30,60,85,80,90,70,50};
    int size = sizeof(post) / sizeof(post[0]);

    struct node *root = constructTree(post, size);


    deleteNode(root,85);

    cout << "\n";
    insertion(root,45);
    cout<<"Preorder\n";
    preorder(root);
    cout<<"\nDescending\n";
    des(root);

    return 0;
}