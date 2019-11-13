#include <bits/stdc++.h>
using namespace std;
struct Node
{
    struct Node *left;
    struct Node *right;
    int data;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
void makeTree(Node *temp, int x)
{
    queue<Node *> q;
    q.push(temp);
    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();
        if (!front->left)
        {
            front->left = new Node(x);
            break;
        }
        else
        {
            q.push(front->left);
        }
        if (!front->right)
        {
            front->right = new Node(x);
            break;
        }
        else
        {
            q.push(front->right);
        }
    }
}
void print(Node *temp)
{
    if (temp == NULL)
        return;
    cout << temp->data << " ";
    print(temp->left);
    print(temp->right);
}
bool isCompleteBinaryTree(Node* root){
    queue<Node*> q;
    q.push(root);
    bool flag_left = true, flag_right = true;
    while(!q.empty()){
        Node* front = q.front();
        q.pop();
        if(front->left){
            q.push(front->left);
            if(flag_right == false)
            return false;
        }else
        flag_left = false;
        if(front->right){
            q.push(front->right);
            if(flag_left == false)
            return false;
        }else
        flag_right = false;
    }
    return true;
}
// complete bianry tree is one which has all non leaf no with 2 child 
// except the alst level which has all noes to the left most
int main()
{
    // int x;
    // cin >> x;
    Node* root = new Node(0);
    root->left = new Node(1);
    root->right = new Node(2);
    root->left->left = new Node(1);
    root->right->right = new Node(1);
    // while(x != -1){
    //     makeTree(root,x);
    //     cin >> x;
    // }
    isCompleteBinaryTree(root) ==  0 ? cout <<"NO": cout <<"YES";
    // print(root);
}