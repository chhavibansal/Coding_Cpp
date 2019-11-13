#include<iostream>
#include<list>
#include<map>
#include<queue>
using namespace std;
template<typename T>
class Graph{
    map<T , list<T>> adjList;
public:
    Graph(){

    }
    void addEdge(T u , T v , bool isBir = true){
        adjList[u].push_back(v);
        if(isBir)
        adjList[v].push_back(u);
    }
    void bfs(T src){
        queue<T> q;
        map<T , bool> visited;
        visited[src] =  true;
        q.push(src);
        while(!q.empty()){
            T node = q.front();
            cout << node<< "->";
            q.pop();
            for(auto l : adjList[node]){
                if(!visited[l]){
                    q.push(l);
                    visited[l] = true;
                }

            }

        }
}
    void print(){
        for(auto i : adjList){
            cout << i.first << "->";
            for(T entry : i.second)
            cout << entry<<",";
            cout << endl;
        }
    }

};
int main(){
    Graph<int> g;
    g.addEdge(1,2);
    g.addEdge(100,2);
    g.addEdge(100,3);
    g.print();

    g.bfs(2);
}