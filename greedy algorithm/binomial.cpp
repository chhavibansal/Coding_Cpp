#include<iostream>
using namespace std;
int binomial(int n,int r){
	if(r==0|| r==1) return 1;
	return binomial(n-1,r-1)+binomial(n-1,r);
}
int main(){
	int n,r;
	cin>>n>>r;
	(r>n)?cout<<"cannot be computed": binomial(n,r);
}
