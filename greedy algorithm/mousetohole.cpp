#include<bits/stdc++.h>
using namespace std;
int assignMiceHole(	vector<int> mice,vector<int> hole){
	if(mice.size()!=hole.size()) return -1;
	sort(mice.begin(),mice.end());
	sort(hole.begin(),hole.end());
	int size=mice.size();
	int max=0;
	for(int i=0;i<size;i++){
		if(max< abs(mice.at(i) - hole.at(i)))
		max=abs(mice.at(i) - hole.at(i));
		
	}
	return max;
}
int main(){
	vector<int> m;
//	auto it = m.insert()
	m.push_back(4);
	m.push_back(-4);
	m.push_back(2); 
	 vector <int>::iterator itr;
	 for(itr=m.begin();itr!=m.end();itr++)
	 cout<<*itr<<" ";
	vector<int> h;
	h.push_back(4);
	h.push_back(0);
	h.push_back(5);
	cout<<assignMiceHole(m,h);
}
