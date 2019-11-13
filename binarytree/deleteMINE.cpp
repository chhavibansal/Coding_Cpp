#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left,*right;
};

struct node* nwNode(int val){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	temp->left=temp->right=NULL;
	return temp;
}
node* insert(node* root,int val){
	node* ptr=(struct node*)malloc(sizeof(struct node));
	if(root==NULL) {
	return nwNode(val);	
	}
	
	if(root->data<val){
		root->right=insert(root->right,val);
	}
	else if(root->data>val){
		root->left=insert(root->left,val);
	}		
}
void inorder(node* root){
	if(root==NULL) return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void deepestDelete(node* root,node* d_node){
	queue<struct node*> q;
	node* temp;
	q.push(root);
	while(!q.empty()){
		temp=q.front();
		q.pop();
		if(temp->right){
			if(temp->right==d_node){
				temp->right=NULL;
				delete(d_node);
				return;
			}
			else
			q.push(temp->right);
		}
		
		if(temp->left){
			if(temp->left==d_node){
				temp->left=NULL;
				delete(d_node);
				return;
			}
			else
			q.push(temp->left);
		}
	}
}
void delteNode(struct node* root,int val){
	node* temp;
	node* desired_node=NULL;
	queue<struct node*>	q;
	q.push(root);
//level order traversal of binary tree
	while(!q.empty()){
		temp=q.front();
		q.pop();
		if(temp->data==val)
			desired_node=temp;
		if(temp->left){
			q.push(temp->left);
		}
		if(temp->right)
		q.push(temp->right);
	}
	int x=temp->data;
	deepestDelete(root,temp);
	desired_node->data=x;
}	
int main(){
	struct node* root = nwNode(10); 
    root->left = nwNode(11); 
    root->left->left = nwNode(7); 
    root->left->right = nwNode(12); 
    root->right = nwNode(9); 
    root->right->left = nwNode(15); 
    root->right->right = nwNode(8); 
  
    cout << "Inorder traversal before deletion : "; 
    inorder(root); 
  
    int key = 11; 
    delteNode(root, key); 
  
    cout << endl; 
    cout << "Inorder traversal after deletion : "; 
    inorder(root); 
  
    return 0; 
}
