#include"bits/stdc++.h"
using namespace std;
queue<int> Q;
// visited array
bool vis[100004];
//stored distance
int d[1000004];
// dynamic  array to store index of occurance in string
vector<int> V[10];
int main(){
    string s;
    cin >> s;
    memset(vis , false , sizeof(vis));

    int len = s.size();

    for(int i = 0 ; i < len ; i++){
        int digit = s[i]-'0';
        V[digit].push_back(i);
    }

    d[0] = 0;
    vis[0] = true;
    Q.push(0);

    while(!Q.empty()){
        int front = Q.front();
        if(front == len-1)
        break;
        Q.pop();

        int val = s[front]-'0';

        int vsize = V[val].size();
        for(int j =  0 ; j < vsize() ; j++){
            int index = V[val][j];
            if(!vis[index]){
                vis[index] = true;
                Q.push(index);
                d[index] = d[front] +1;
            }
        }
        V[val].clear();
        
    }
    
}