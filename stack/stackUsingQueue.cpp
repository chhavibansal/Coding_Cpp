#include<bits/stdc++.h>
using namespace std;
class Stack{
	int curr_size;
	queue<int> q1,q2;
	public:
	Stack(){
		curr_size=0;
	}
	void push(int val){
		//push operation made costly
		curr_size++;
		q2.push(val);
		while(!q1.empty()){
			q2.push(q1.front());
			q1.pop();
		}
		queue<int> q=q1;
		q1=q2;
		q2=q;
	}
	void pop(){
		if(q1.empty()) return;
		q1.pop(); curr_size--;
	}
	int top(){
		if(q1.empty())	return -1;
		return q1.front();
	}
	int size(){ return curr_size;
	}
};
int main(){
	Stack s;
	s.push(1);
	s.push(3);
	s.push(2);
	cout<<"Current size "<<s.size()<<endl;
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top()<<endl;
	cout<<"current size"<<s.size()<<endl;
}
