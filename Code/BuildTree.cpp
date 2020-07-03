#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* left;
    node* right;

//constructor
    node(int d){
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
void inorder(node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data<<" ";
    inorder(root->right);
}
int main(){
    node* root = buildTree();
    inorder(root);
}
