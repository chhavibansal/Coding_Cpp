#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    //constructor
    node(int d)
    {
        //initialise
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *buildTree()
{
    int d;
    cin >> d;
    if (d == -1)
    {
        return NULL;
    }
    node *root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int height(node *root)
{

    //base recursion
    if (root == NULL)
        return 0;

    int l = height(root->left);
    int r = height(root->right);

    return 1 + max(l, r);
}

void preOrderTraversal(node* root){
    //base condition 
    if(root == NULL) 
    return;

    // Root Left Right
    cout << root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);

}

void inorderTraversal(node*root){
    if(root == NULL) return;

    //left root right
    inorderTraversal(root->left);
    cout << root->data<<" ";
    inorderTraversal(root->right);


}

void postOrderTraversal(node* root){
    if(root == NULL) return;

    // left right root
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);

    cout << root->data<<" ";

}

int main()
{
    node *root = buildTree();

    preOrderTraversal(root);
    cout<<endl;
    inorderTraversal(root);
    cout <<endl;
    postOrderTraversal(root);
    cout<<endl;

    // inorder(root);
    // cout << endl;
    // cout << height(root);
}
