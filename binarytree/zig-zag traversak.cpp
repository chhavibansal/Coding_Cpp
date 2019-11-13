#include<bits/stdc++.h>
using namespace std;
struct node{
    node* left;
    node* right;
    int val;
    node(int data){
        val = data;
        left = right = NULL;
    }
};
void inorder(node* root){
    if(root == NULL )
    return ;
    inorder(root->left);
    cout << root->val;
    inorder(root->right);
}
void insert(node* temp ,int val){
    queue<node*> q;
    q.push(temp);
    while(!q.empty()){
        node* ptr = q.front();
        q.pop();
        if(ptr->left == NULL){
            ptr->left =new node(val);
            break;
        }else{
            q.push(ptr->left);
        }

        if(ptr->right == NULL){
            ptr->right =new node(val);
            break;
        }
        else{
            q.push(ptr->right);
        }
    }
}
void zigZag(node* root){
    stack<node*>s1, s2;
    s1.push(root);
    bool ltoR = false;
    while(!s1.empty() || !s2.empty()){
        if(ltoR == false){
            while(!s1.empty()){
                node* temp = s1.top();
                cout << temp->val <<" ->";
                s1.pop();
                if(temp->left != NULL)
                    s2.push(temp->left);
                if(temp->right != NULL)
                    s2.push(temp->right);
                
            }
            ltoR = true;
        }
        else
        {
            while(!s2.empty()){
                node* temp = s2.top();
                cout << temp->val<<" ->";
                s2.pop();
                if(temp->right != NULL)
                    s1.push(temp->right);
                if(temp->left != NULL)
                    s1.push(temp->left);
            }
            ltoR = false;
        }
        
    }
}
int main(){
    node* root = NULL;
    root = new node(1);
    insert(root ,2);
    insert(root ,3 );
    insert(root , 4);
    insert(root , 5);

    inorder(root);
cout << endl;
    zigZag(root);
}
