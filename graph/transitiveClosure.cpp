#include<bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    bool tc[4][4];
    map<int,list<int>> adjList;
public:
    Graph();
    void addEdge(int u , int v);
    void print();
    void transitiveClosure();
    void dfs(int a, int b);
};
Graph::Graph(){

        memset(tc, 0,sizeof(tc));
}
void Graph::addEdge(int u , int v){
    adjList[u].push_back(v);
}
void Graph::print(){
    for(auto i : adjList){
        cout << i.first<<"->";
        for(int x : i.second)
        cout << x <<"->";
        cout << endl;
    }
}
void Graph::dfs(int visiting , int src){
    tc[visiting][src] = true;
    for(int i : adjList[visiting]){
        if(tc[visiting][i] != 1)
        dfs(visiting, i);
    }
}
void Graph::transitiveClosure(){
    for(int i = 0 ; i < 4; i++)
        tc[i][i] = 1;
    for(int i = 0 ; i < 4; i++){
        dfs(i , adjList[i]);
    }
    for(int i =0 ; i < 4 ; i++){
        for(int j = 0 ; j < 4; j++){
            cout << tc[i][j] <<" ";
        }
        cout << endl;
    }
}
int main(){
    // Graph g(4);
    Graph g;
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,0);
    g.addEdge(2,3);
    g.addEdge(0,2);
    g.print();
    g.transitiveClosure();
    
}