//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left, *right;
//	node(int data)
};
struct node* nodeNew(int data){
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
		ptr->data=data;
		ptr->left=ptr->right=NULL;
		return ptr;
}
struct node* insert(struct node* root,int val){
//	struct node* temp=(struct node*)malloc(sizeof(struct node));
	if(root==NULL){
		return nodeNew(val);
	}
	if(val<root->data)
	root->left=insert(root->left,val);
	else if(val>root->data)
	root->right=insert(root->right,val);
}
void maxDiff(node* root){
	queue<struct node*> q;
	if(root==NULL) return;
	q.push(root);
	int diff_max=INT_MIN,diff=INT_MIN;
	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		int val=temp->data;
		if(!temp->left && !temp->right){
			if(diff > diff_max) diff_max=diff;
		}
		else{
			if(temp->left){
				q.push(temp->left);
				diff=abs(temp->left->data - temp->data);
				if(diff > diff_max) diff_max=diff;
			}
			if(temp->right){
				q.push(temp->right);
				diff=abs( temp->right->data - temp->data);
				if(diff > diff_max) diff_max=diff;
			}
		}
	}
	cout<<diff_max;
}
void inOrder(node* root){
	if(root==NULL) return;
	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
}
int main(){
		struct node* root=NULL;
		root=insert(root,5);
		insert(root,2);
		insert(root,1);
		// insert(root,30);
		// insert(root,60);
		inOrder(root);
		maxDiff(root);
}
