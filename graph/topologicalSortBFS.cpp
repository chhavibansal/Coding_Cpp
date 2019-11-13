#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Graph{
public:
    Graph(){}

    map<T, list<T>> adjlist; 
    map<T, int> indegree;
    void addEdge(T u , T v , bool bidir = false){
        adjlist[u].push_back(v);
        if(bidir == true)
        adjlist[v].push_back(u);
    }
    void print(){
        for(auto i : adjlist){
            cout << i.first<<" ->";
            for(auto listVal: i.second){
                cout << listVal<<" ,";
            }
            cout << endl;
        }
    }
    void bfs(T src){
        queue<T> q;
        q.push(src);
        map<T , bool > visited;
        visited[src] = true;
        while(!q.empty()){
            T temp = q.front();
            cout << temp <<" ";
            q.pop();
            for(auto child : adjlist[temp]){
                if(!visited[child]){
                    visited[child] = true;
                    q.push(child);
                }
            }
        }       
    }
    void calcIndegree(){
        for(auto i : adjlist){
            for(auto k: i.second){
                indegree[k]++;
            }
        }
    }
    void printIndegree(){
        for(auto k : adjlist){
            cout << indegree[k.first]<<endl;
        }
    }
    void bfsKhansAlgo(){
        queue<T> q;
        for(auto k : indegree){
            if(k.second == 0)
            q.push(k.first);
        }
        while(!q.empty()){
            T temp = q.front();
            cout << temp<<" ";
            q.pop();
            for(auto t : adjlist[temp]){
                indegree[t]--;
                if(indegree[t] == 0) q.push(t);
            }
        }
    }
    bool isCyclic(T src){
        queue<T> q;
        map<T , T> parent;
        map<T, bool > visited;
        q.push(src);
        parent[src] = src;
        visited[src] = true;

        while(!q.empty()){
            T node = q.front();
            q.pop();

            for(T nbd : adjlist[node]){
                if(visited[nbd] == true && parent[nbd]!= node){
                    return true;
                }
                else if(!visited[nbd]){
                    visited[nbd] = true;
                    parent[src] = node;
                    q.push(nbd);

                }
            }

        }
        return true;
    }
};
int main(){
    Graph<int> b;
    //  1  0 
    //   2   4
    // 5   3
     b.addEdge(0,1);
    b.addEdge(0,4);
    b.addEdge(4,3);
    // b.addEdge(1,4);
    b.addEdge(2,4);
    b.addEdge(1,2);
    b.addEdge(2,3);
    // b.addEdge(1,3);
    b.addEdge(3,5);
    b.print();
    b.bfs(0); cout << endl;
    b.calcIndegree();
    b.printIndegree();
    cout << endl;
    b.bfsKhansAlgo();
    cout << endl;

    b.isCyclic(0) == 0 ? cout <<"No cycle exists" : cout <<"Yes cyclic";
}