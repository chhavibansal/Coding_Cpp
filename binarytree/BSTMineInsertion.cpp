#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *left,*right;
};
struct node* nwNode(int val){
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=val;
	ptr->left=ptr->right=NULL;
	return ptr;
}
struct node* Insert(struct node* root,int val){
	if(root==NULL){
	return nwNode(val);
//	return;	
	} 
	if(root->data<val)
	root->right=Insert(root->right,val);
	else
	root->left=Insert(root->left,val);
	return root;
}
struct node * minValue(struct node* node) 
{ 
    struct node* current = node; 
  
    /* loop down to find the leftmost leaf */
    while (current->left != NULL) 
        current = current->left; 
  
    return current; 
} 
struct node* delNode(struct node* root,int val){
	if(root==NULL) return root;
	if(root->data<val)
	root->right=  delNode(root->right,val);
	else if(root->data>val)
	root->left=delNode(root->left,val);
	else{
		if(root->left==NULL){
			struct node* temp=root->right;
			free(root);
			return temp;
		}
		else if(root->right==NULL){
			struct node* temp=root->left;
			free(root);
			return temp;
		}
		struct node* temp=minValue(root->right);
		root->data=temp->data;
		root->right=delNode(root->right,temp->data);
	}
	return root;
}
void print(struct node* root){
	if(root==NULL) return;
	print(root->left);
	cout<<root->data<<" ";
	print(root->right);
}
int main(){
	struct node* root=NULL;
	root=Insert(root,10);
	Insert(root,5);
	Insert(root,20);
	Insert(root,15);
	print(root);
	root=delNode(root,10);
	cout<<endl;
	print(root);
}
