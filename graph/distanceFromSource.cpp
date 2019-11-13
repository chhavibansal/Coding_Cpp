#include<iostream>
#include<map>
#include<queue>
#include<climits>
#include<list>
using namespace std;
template<typename T>
class Graph{
    map<T , list<T>> adjList;
public:
    Graph(){

    }
    void addEdge(T u , T v , bool bidir = true){
        adjList[u].push_back(v);
        if(bidir){
            adjList[v].push_back(u);
        }
        // created adjacency list
    }
void distance(T src){
        map<T , T> parent;
        map<T ,int> dis;
        queue<T> q;
        for(auto x: adjList)
            dis[x.first]  = INT_MAX;  
        q.push(src);
        dis[src] = 0 ;
        parent[src] = src;
       
        while(!q.empty()){  
            T node = q.front();
            cout << node << "->";
            q.pop();
            for(auto x : adjList[node]){
                if(dis[x] == INT_MAX){
                    q.push(x);
                    dis[x] = dis[node] + 1;
                    parent[x] =  node;

                }
            }
            
        }
        for(auto i : adjList){
            T node = i.first;
            cout << "DIstance of "<< node << " from "<< src <<" is "<< dis[node]<<endl; 
        }
    }
};
int main(){
    Graph<int> g;
    g.addEdge(1, 2);
    g.addEdge(1,3);
    g.addEdge(3,4);
    g.addEdge(2,4);
    g.addEdge(3,6);
    g.addEdge(4,6);
    g.addEdge(4,5);
    g.distance(1);
}
