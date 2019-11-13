#include<bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    map<int , list<int>> adjList;
public:
    Graph(int v){V = v;}
    void addEdge(int u , int v){
        adjList[u].push_back(v);
        // adjList[v].push_back(u);
    }
    void bfs(int src);
    int pathCountSourceToDesc(int s, int d);
    void pathUtility(int  s, int d , bool visited[], int &count);
};
void Graph::bfs(int src){
    bool visited[V] ;
    int dis[V] = {0};
    memset(visited, false , sizeof(visited));
    queue<int> q;
    q.push(src);
    while(!q.empty()){
        int front = q.front();
        q.pop();
        visited[front] = true;
        for(auto i : adjList[front]){
            if(visited[i] == false){
            dis[i] = dis[front]+1;
            q.push(i);}
        }   
    }
    for(int i : dis)
    cout << i  <<" ";
}
int Graph:: pathCountSourceToDesc(int s ,int d){
    int count = 0;
    bool visited[V];
    memset(visited, false , sizeof(visited));
    pathUtility(s, d, visited, count);
    return count;
}
void Graph::pathUtility(int s, int d , bool visited[], int &count){
    visited[s]  = true;
    if(s == d){
        count+=1;
    }
    else{
        for(auto i : adjList[s])
        if(!visited[i])
        pathUtility(i , d , visited, count);
    }   
    visited[s] = false;
}
int main(){
    Graph g(4);
   g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(0, 3); 
    g.addEdge(2, 0); 
    g.addEdge(2, 1); 
    g.addEdge(1, 3); 
    // g.bfs(0);
    cout <<  g.pathCountSourceToDesc(2,3);
}