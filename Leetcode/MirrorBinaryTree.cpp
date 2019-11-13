#include"bits/stdc++.h"
using namespace std;
class Node{
public:
    Node* left;
    Node* right;
    int val;


    Node(int data){
        val = data;
        left = right = NULL;
    }
};
    void insertB(Node* root,int data ){
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            Node* temp= q.front();
            q.pop();
            if(!temp->left){
                temp->left =new Node(data);
                break;
            }else{
                q.push(temp->left);
            }
            if(!temp->right){
                temp->right =new Node(data);
                break;
            }else{
                q.push(temp->right);
            }
        }
    }
    Node* mirror(Node* root ){
        if(!root) 
        return NULL;

        mirror(root->left);
        mirror(root->right);

        // swap left to right'

        Node* temp = root->left;
        root->left = root->right;
        root->right = temp;
    return root ;
    }
    void inorder(Node* root){
        if(!root)
        return ;

        inorder(root->left);
        cout << root->val<< " ";
        inorder(root->right);
    }
int main(){
    Node* root = new Node(1);
    insertB(root,2);
    insertB(root ,3);
    insertB(root , 4);
    insertB(root , -1);
    insertB(root , 5);
 insertB(root , 6);
       inorder(root);
       Node* rot = mirror(root);
       cout << endl;
       inorder(rot);
}