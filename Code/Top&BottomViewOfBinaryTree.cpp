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
void topView(node* root , int dist, int level , map<int,pair<int,int>> &mp){
    if(root == NULL)
        return ;

    if(mp.count(dist) == 0 ){
        mp[dist] ={root->data , level};
    }else{
        if(mp[dist].second > level){
            mp[dist] = {root->data , level};
        }
    }

    topView(root->left , dist-1 , level+1 , mp);
    topView(root->right , dist+1 , level+1 , mp);

}



void bottomView(node *root , int dist , int level , map<int,pair<int,int>>&mp){
    if(root == NULL)
    return ;

//nhi h available 
    if(mp.count(dist) == 0 ){
        mp[dist] = {root->data , level};
    }else{
        if(mp[dist].second <= level){
            //update
            mp[dist] = {root->data , level};
        }
    }
    bottomView(root->left , dist -1 , level+1 , mp);
    bottomView(root->right , dist+1 , level +1 , mp);
}



int main()
{
    node *root = buildTree();
    
    map<int,pair<int,int>> mp;
    // topView(root , 0 , 0 , mp);
    
    map<int,pair<int,int>> mp2;
    bottomView(root , 0 , 0 , mp)2;
    cout <<"Top View\n";
    for(auto it : mp){
        cout <<it.second.first<<" ";
    }
    cout <<"\n Bottom View\n";
     for(auto it : mp2){
        cout <<it.second.first<<" ";
    }
