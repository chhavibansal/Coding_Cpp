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

int height(node *root)
{

    //base recursion
    if (root == NULL)
        return 0;

    int l = height(root->left);
    int r = height(root->right);

    return 1 + max(l, r);
}
int diameter(node *root){
    // base condiiton
    if(root == NULL)
    return 0;

    int leftH = height(root->left);
    int rightH = height(root->right);
    int leftD = diameter(root->left);
    int rightD = diameter(root->right);

    return max({leftH+rightH , leftD , rightD});

}

int main()
{
    node *root = buildTree();
    cout << diameter(root);
   
    // 1 2 3 4 -1 -1 5 -1 -1 -1 6 -1 9 -1 11 -1 -1
}
