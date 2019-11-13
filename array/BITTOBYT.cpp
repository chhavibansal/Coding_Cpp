#include<iostream>
using namespace std;
void print(int popln[]){
	
	for(int i=0;i<3;i++)
	cout<<popln[i]<<" ";
	cout<<'\n';
}
void Population(int n){
	int count=1;
	int popln[3]={0};
	int num=n/27;
	int rem=n%27;
	do{
	
		if(rem>=0 && rem<=2)
		popln[0]=count;
		else if(rem>=3 && rem<=10)
		popln[1]=count;
		else
		popln[2]=count;
		
		count=count*2;
	}while(num--);

	print(popln);
}

int main(){
	int n,t;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		Population(n);
	}
}
