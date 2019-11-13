#include<bits/stdc++.h>
using namespace std;
// template <typename T>
class Graph{
    int V; 
    list<int> *adj;
public:    Graph(int v){
        V = v;
        // pointer to an array containing adj list
        adj = new list<int>[V];
    }
    void addEdge(int u , int  v);
    void bfs(int src);
    void dfs(int src);
    // void topological();
    void allComponent(int src);
    void dfsHelper(int src , map<int,bool>visited);
};
void Graph::allComponent(int src){
    map<int , bool> visited;
    dfsHelper(src, visited);
    for(auto i : adj){
        int city = i.first;
        if(!visited[city])
        dfsHelper(city, visited);
    }
}
void Graph::dfsHelper(int src, map<int, bool>&visited){
    visited[src] = true;
    cout << src<<"->";
    for(int nbd : adj[src]){
        if(!visited[nbd])
        dfsHelper(nbd, visited);
    }
}
void Graph::dfs(int src){
    static map<int, bool> visited;
    if(!visited[src])
    cout << src<<"->";
    else return;
    visited[src] = true;
    for(int l : adj[src]){
        if(!visited[l])
        dfs(l);
    }
}
void Graph::addEdge(int u , int v){
    adj[u].push_back(v);
}
void Graph::bfs(int src){
    queue<int> q;
    map<int,bool> visited;
    visited[src] = true;
    q.push(src);
    while(!q.empty()){
        int node = q.front();
        cout << node<<"->";
        q.pop();
        for(int l : adj[node]){
            if(!visited[l]){
                q.push(l);
                visited[l] = true;
            }
        }
    }


}
int main(){
    Graph g(6);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,0);
    g.addEdge(2,3);
    g.addEdge(3,3);
    g.addEdge(0,2);
    g.addEdge(4,5);
    g.bfs(2);
    // cout << endl;
    // g.dfs(2);
    cout << endl;
    g.allComponent(0);
}