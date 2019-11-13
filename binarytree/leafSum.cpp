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
void print(struct node* root){
	if(root==NULL) return;
	print(root->left);
	cout<<root->data<<" ";
	print(root->right);
}
void leafSum(node* root,int *sum){
	if(root==NULL) return;
	if(!root->left && !root->right){
		*sum+=root->data;
	}
	leafSum(root->left,sum);
//	cout<<*sum<<endl;
	leafSum(root->right,sum);
	cout<<*sum<<endl;
///	cout<<sum<<endl;
}
int main(){
	struct node* root=NULL;
	root=Insert(root,10);
	Insert(root,5);
	
	Insert(root,15);
	Insert(root,2);
	Insert(root,20);
	print(root);
//	root=delNode(root,10);
	int sum=0;
	cout<<endl;
	leafSum(root,&sum);
	cout<<sum<<endl;
//	cout<<endl;
//	print(root);
}

