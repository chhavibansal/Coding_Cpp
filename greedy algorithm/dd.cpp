#include<iostream>
using namespace std;
int fun(int a ,int b){
	if(a>b) return fun(b,a);
	else
	return a;
} 
int main(){
	cout<<fun(10,40);
}
