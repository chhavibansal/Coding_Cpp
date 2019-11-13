#include"bits/stdc++.h"
using namespace std;
template<typename T>
class Graph{
    map<T,list<T>> adjList;
public:
    Graph(){
    }
    void addEdge(T u , T v , bool biDir = true){
        adjList[u].push_back(v);
        if(biDir)
        adjList[v].push_back(u);
    }
    void prAdjList(){
        for(auto i :  adjList){
            cout << i.first <<"->";
            for(T  vertex: i.second){
                cout << vertex <<",";
            }
            cout << endl;
        }
    }
    void dfsHelper(T node , map<T, bool>&visited){
        // mark curr node visited
        visited[node] = true;
        cout << node << " ";

        for(T nbd : adjList[node]){
            if(!visited[nbd])
            dfsHelper(nbd , visited);
        }
    }
    void dfs(T src){
        map<T, bool> visited;
        dfsHelper(src , visited);
    }
    void bfs(T src){
        queue<T> q;
        map<T, bool> visited;

        visited[src] = true;
        q.push(src);
        while(!q.empty()){
            T front= q.front();
            q.pop();
            cout << front << " ";
            for(auto nbd : adjList[front]){
                if(!visited[nbd]){
                    q.push(nbd);
                    visited[nbd] = true;
                }
            }

        }
    }
};
int main(){
    Graph<int> g;
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(4,3);
    g.addEdge(1,4);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.prAdjList();
    g.dfs(0);
    cout << endl;
    g.bfs(0);
}