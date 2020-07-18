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
void sumOfNodes(node *root, int &sum){

    if(root == NULL)
    return ;

    sum+= root->data;

    sumOfNodes(root->left, sum);
    sumOfNodes(root->right , sum);

}
int countNodes(node *root){
    if(root== NULL)
    return 0;

    return 1 + countNodes(root->left)+ countNodes(root->right);
}

int main()
{
      node *root = buildTree();
  // 1 2 3 4 -1 -1 5 -1 -1 -1 6 -1 9 -1 11 -1 -1
  int sum = 0 ;
  sumOfNodes(root ,sum);
  cout << countNodes(root)<<"\n";
  cout << sum <<"\n";
    cout << diameter(root);
   
    // 1 2 3 4 -1 -1 5 -1 -1 -1 6 -1 9 -1 11 -1 -1
}
