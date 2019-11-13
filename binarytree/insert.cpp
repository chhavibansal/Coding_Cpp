#include<iostream>
#include<stdlib.h>
using namespace std;
struct node {
	int data;
	node* left;
	node* right;
};
struct node* newNode(int val){
	node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
struct node* insert(node* root,int val){
	if(root==NULL) root=newNode(val);
	else if(val <= root->data)
	root->left=insert(root->left,val);
	else
	root->right=insert(root->right,val);
	return root;
}
void print(node* head){
	if(head==NULL) return;
	print(head->left);
	cout<<head->data<<" ";
	print(head->right);
	return;
}
bool search(node* root,int val){
	if(root==NULL) return false;
	else if(root->data==val) return true;
	else if(val<=root->data) return search(root->left,val);
	else return search(root->right,val);
}
int min(node* root){
	if(!root) return 0 ;
	while(root->left) root=root->left;
	return root->data;
}
int max(node* root){
	if(!root) return 0;
	while(root->right) root=root->right;
	return root->data;
}
int main(){
	node* root=NULL;
	root=insert(root,15);root=insert(root,10);root=insert(root,25);
	root=insert(root,9);root=insert(root,20);
	print(root);
	(search(root,20)== true) ?cout<<"\nFound" : cout<<"\nNot found";
	cout<<"\n"<<min(root)<<'\n';
	cout<<"\n"<<max(root);
}
