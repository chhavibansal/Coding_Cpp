#include<iostream>
using namespace std;
void find_fine(int n,int d){
	int arr[n]={0};
	int i,p[n]={0},fine=0;
	for(i=0;i<n;i++)
	cin>>arr[i];
	
	for(i=0;i<n;i++)
	cin>>p[i];
	
	if(d%2==0){
		for(i=0;i<n;i++){
			if(arr[i]%2!=0){
				fine=fine+p[i];
			}
		}
	}
	else{
		for(i=0;i<n;i++)
			if(arr[i]%2==0)
				fine=fine+p[i];
	}
	cout<<fine<<endl;
}
int main(){
	int i,t,n,d;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>n>>d;
		find_fine(n,d);
	}
}
