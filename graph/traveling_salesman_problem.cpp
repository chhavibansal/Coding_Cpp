#include<bits/stdc++.h>
using namespace std;
int n = 4;
int dist[10][10] = {
    {0,20,42,25},
    {20,0,30,34},
    {42,30,0,10},
    {25,34,10,0}
};

int Visited_all = (1 << n) - 1;
int tsp ( int mask , int pos){
    if( mask == Visited_all){
        // distance from the last node to the 1st node 
        return dist[pos][0];
    }
    int ans = 10e5;

    for(int city = 0 ; city < n ; city++){
        //unvisited city 
        if((mask&(1 << city) ) == 0 ){
            int newAns = dist[pos][city] + tsp ( ( mask|(1<<city) ) , city);
            ans = min(ans , newAns);
        }
    }
    return ans;
}
int main(){
	cout<<"Travelling Saleman Distance is"<<tsp(1,0);

}

//https://ide.codingblocks.com/s/256516