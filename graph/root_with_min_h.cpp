#include<bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    map<int,list<int>> adjList;
    vector<int> degree;
public:
    Graph(int v){
        V = v;
        for(int i = 0 ; i < V ; i++)
        degree.push_back(0);
    }
    void addEdge(int u , int v);
    void bfs();
    int height(int src);
    void optimalDP();
};
void Graph::optimalDP(){
    queue<int> q;
    int c = V;
    for(int i = 0 ; i < V ; i++){
        if(degree[i] == 1)
        q.push(i);
    }
    while( c > 2){
        for(int i = 0 ; i < q.size() ; i++){
            int front = q.front();
            q.pop();
            c--;
            for(int i : adjList[front]){
                degree[i]--;
                if(degree[i] == 1)
                q.push(i);
            }
        }
        
    }
    while(!q.empty()){
        cout << q.front() <<" ";
        q.pop();
    }
}
void Graph::addEdge(int u , int v){
    adjList[u].push_back(v);
    adjList[v].push_back(u);
    degree[u]++;
    degree[v]++;
}
int Graph::height(int src){
    queue<int> q ;
    q.push(src);
    map<int,bool>visited;
    visited[src] = true;
    int  h = 0;
    while(!q.empty()){
        int sz = q.size();
        while(sz--){
            int front = q.front();
            q.pop();
            for(int i : adjList[front]){
                if(!visited[i])
                q.push(i), visited[i] = true;
            }
        }
    h+=1;
    }
    return h;
}
void Graph::bfs(){
    vector<int> h;
    for(auto node: adjList){
        h.push_back(height(node.first));
    }
    int min = INT_MAX;
    for(int i : h){
        i < min ? (min = i): min = min;
    }
    for(int i  = 0 ; i < h.size(); i++){
        if(h[i] == min)
        cout <<"Node is "<< i<<endl;
    }
}


int main(){
    Graph g(6); 
    g.addEdge(0, 3); 
    g.addEdge(1, 3); 
    g.addEdge(2, 3); 
    g.addEdge(4, 3); 
    g.addEdge(5, 4); 
    // g.bfs();
    // // cout << endl;
    g.optimalDP();
}