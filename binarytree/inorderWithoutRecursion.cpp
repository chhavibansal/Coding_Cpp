#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node* left;
	struct node* right;
	node(int data){
		this->data=data;
		left=right=NULL;
	}
};
void inOrder(struct node* root){
	stack<node *>s;
	node *curr=root;
	while(curr!=NULL || s.empty()==false){
		while(	curr!=NULL){
			s.push(curr);
			curr=curr->left;
		}
		curr=s.top();
		s.pop();
		cout<<curr->data<<" ";
		curr=curr->right;
	}
}
int main(){
	struct node* root=new node(1);
	root->left		 =new node(2);
	root->right		 =new node(3);
	root->left->left =new node(4);
	root->left->right=new node(5);
	inOrder(root);
}
