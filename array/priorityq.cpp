#include<bits/stdc++.h>
using namespace std;
int main(){
//	priority_queue <int> pq;
	priority_queue<int, vector<int>,greater<int>> pq;
	pq.push(5);
	pq.push(15);
	pq.push(3);
	pq.push(50);
	pq.push(7);
	while(pq.empty()==false){
		cout<<pq.top()<<" ";
		pq.pop();
	}
}
