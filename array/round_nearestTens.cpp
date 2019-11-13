#include<iostream>
using namespace std;
void nearest_tens(){
	int i;
	long int n;
	cin>>n;
	long int q,val=0;
	int rem=n%10;
	if(rem<=5 && rem>0){
		q=n/10;
		val=q*10;
	}
	else{
		q=n/10;
		val=q*10+10;
	}
	cout<<val<<endl;
}
int main(){
	int t,i;
	cin>>t;
	for(i=0;i<t;i++){
		nearest_tens();
	}
}
