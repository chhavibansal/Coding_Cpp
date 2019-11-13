#include<bits/stdc++.h>
using namespace std;
class TwoStack{
	int size;
	int *arr;
	int top1,top2;
	public: 
	TwoStack(int n){
		size=n;
		arr=new int[n];
		top2=size;
		top1=0;
	}
	void push1(int val){
		if(top1<=top2-1){
			arr[top1]=val;
			top1++;
		}
		else{
			cout<<"Stack Overflow"<<endl;
			exit(1);
		}
	}
	void push2(int val){
		if(top2>=top1+1){
			arr[top2]=val;
			top2--; 
//			cout<<top2<<" ";
		}
		else{
			cout<<"stack overflow"<<endl;
			exit(1);
		}
	}
	void pop1(){
		if(top1>=0){
			top1--;
			int item=arr[top1];
			
			cout<<"popped element  :"<<item<<endl;
		}
		else{
			cout<<"UnderFlow"<<endl;
			exit(1);
		}
	}
	void pop2(){
		if(top2>=size-1){
			top2--;
			int item=arr[top2];
			
			cout<<"popped element  :"<<item<<endl;
		}
		else{
			cout<<"UnderFlow"<<endl;
			exit(1);
		}
	}
	void size_s1(){
		cout<<top1<<endl;
	}
	void size_s2(){
		int sz= size-top2;
		cout<<sz<<endl;
	}
	
};
int main(){
	TwoStack s1(6);
	s1.push1(1);
	s1.push1(2);
	s1.push2(10);
	s1.push2(9);
	s1.push1(3);
	s1.push2(6);
	s1.pop1();
s1.pop1();s1.pop1();
	s1.push2(20);
	
	s1.size_s1();
	s1.size_s2();
}
