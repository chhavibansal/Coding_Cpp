#include<bits/stdc++.h>
using  namespace std;
struct node{
	int data;
	struct node *left, *right;
};
struct node* newNode(int val){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	temp->left=temp->right=NULL;
	return temp;
}
//del node is to be deleted
void deleteDeepestNode(struct node* root,struct node* del){
	queue<struct node*>q;
	q.push(root);
	struct node* temp;
	while(!q.empty()){
		temp=q.front();
		q.pop();
		if(temp->right){
			if(temp->right==del){
				temp->right=NULL;
				delete(del);
				return;
			}
		else 
		q.push(temp->right);
		}
		if(temp->left){
			if(temp->left==del){
				temp->left=NULL;
				delete(del);
				return;
			}
			else
			q.push(temp->left);
		}
	}
}
void deletion(struct node* root,int key){
	queue<struct node*>q;
	q.push(root);
	struct node* temp;
	struct node* key_node=NULL;
	while(!q.empty()){
		temp=q.front();
		q.pop();
		if(temp->data==key)
		key_node=temp;
		if(temp->left)
		q.push(temp->left);
		if(temp->right)
		q.push(temp->right);
	}
	int n=temp->data;
	deleteDeepestNode(root,temp);
	key_node->data=n;
}
void inOrder(struct node* root){
	if(!root) return ;
	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
		
}
int main(){
	struct node* root=newNode(10);
	root->left=newNode(11);
	root->left->left=newNode(7);
	root->left->right = newNode(12); 
    root->right = newNode(9); 
    root->right->left = newNode(15); 
    root->right->right = newNode(8); 
    cout<<"inorder traversal before deletion";
    inOrder(root);
    int key=11;
    deletion(root,key);
    cout<<endl;
    cout<<"Inorder traversal after deletion ";
    inOrder(root);
}
