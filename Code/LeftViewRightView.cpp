#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    //constructor
    node(int d)
    {
        //initialise
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *buildTree()
{
    int d;
    cin >> d;
    if (d == -1)
    {
        return NULL;
    }
    node *root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void leftView(node * root , int CurrentHeight, int &maxHeight){
    if(root == NULL)
    return;

    if(CurrentHeight > maxHeight)
    {
        cout << root->data<<" ";
        maxHeight = CurrentHeight;
    }

    leftView(root->left, CurrentHeight+1 , maxHeight);
    leftView(root->right , CurrentHeight+1 , maxHeight);

}


void rightView(node *root , int currLevel , int &maxLevel){
    if(root == NULL)
    return ;

    if(currLevel > maxLevel){
        maxLevel = currLevel;
        cout <<root->data<<" ";
    }

    rightView(root->right, currLevel+1 , maxLevel);
    rightView(root->left , currLevel +1 , maxLevel);

}
int main()
{
    node *root = buildTree();
    
    int maxH = -1;
    rightView(root, 0 ,maxH);
cout<<endl;
    int maxH = -1;
    leftView(root, 0 ,maxH);
}
