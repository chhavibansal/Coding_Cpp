#include<bits/stdc++.h>
using namespace std;
struct node{
public:
    int data;
    node* left ;
    node* right;
    node(int d){
        data = d;
        left = right = NULL;
    }
};
class Tree{
public:
    struct node* insert(node* root , int data){
        if(root == NULL){
            return new node(data);
        }

        if(root->data > data){
            root->left = insert(root->left , data);
        }
        else if(root->data < data)
        root->right =insert(root->right ,data);

        return root;
    }
    void inorder(node* root){
        if(root == NULL)
        return;

        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
};

int  main(){
        Tree t;
        node* root = NULL;
       root =  t.insert(root , 6);
        t.insert(root , 3);
        t.insert(root ,9);
        t.insert(root , 7);
        t.inorder(root);
}