#include<bits/stdc++.h>
using namespace std;
void closest_number(){
	int n,m;
	cin>>n>>m;
	int result=0,mid=0,val=0;
	
	if(n>0){
		val= (n%m);
// 		cout<<val<<" ";
		mid=m/2;
		int m1=abs(m);
		if(val<mid)
		result=n-val;
		else
		result=n+(m1-val);
	}
	else{
		val= (n%m);
// 		cout<<val<<" ";
		mid=m/2;
		if(abs(val)<mid)
		result=n-val;
		
		else
		result=n-(m+val);
	}
	cout<<result<<endl;
}
int main(){
	int i,t;
	cin>>t;
	for(i=0;i<t;i++){
		closest_number();
	}
}
