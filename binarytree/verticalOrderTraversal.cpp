#include<bits/stdc++.h>
using namespace std;
struct node{
    node* left;
    node* right;
    int val;
    node(int d){
        val = d;
        left = right = NULL;
    }

};
node* buildTree(){
    int d ;
    cin >> d;
    if(d == -1)
    return NULL;
    node* temp = new node(d);
    temp->left = buildTree();
    temp->right = buildTree();
    return temp;
}
void insertLevelOrder(node* root , int val){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* frnt = q.front();
        q.pop();
        if(!frnt->left){
            frnt->left = new node(val);
            break;
        }else{
            q.push(frnt->left);
        }
        if(!frnt->right){
            frnt->right = new node(val);
            break;
        }else{
            q.push(frnt->right);
        }
    }
}
void print(node* root){
    if(root == NULL)
    return ;

    print(root->left);
    cout << root->val<<" ";
    print(root->right);
}
unordered_map<int , vector<int>> m;

void verticalOrder(node* root , int level){
    if(root == NULL)
    return ;

    m[level].push_back(root->val);

    verticalOrder(root->left , level-1);

    verticalOrder(root->right , level+1);
}
void printVertical(node* root ){
    for(auto r : m){
        cout << r.first<<" ->";
        for(auto it :r.second)
        cout << it << "  ";
        cout << endl;
    }

}
int main(){
    // node* root = buildTree();
    node* root = new node(1);
    insertLevelOrder(root , 2);
    insertLevelOrder(root, 3);
    insertLevelOrder(root, 4);
insertLevelOrder(root,6);
    insertLevelOrder(root,7);
    // print(root);
    verticalOrder(root , 0 );
    printVertical(root);
}