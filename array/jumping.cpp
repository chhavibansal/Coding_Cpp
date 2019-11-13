#include<iostream>
using namespace std;
int main(){
	int n,i;
	int count=0,c=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++) cin>>arr[i];
//	for(i=0;i<n;i++)
i=0;
	while(i<n){
//		if(arr[i]==1){
//			
//		}
		c++; cout<<c;
		if(arr[i]==arr[i+1] && arr[i]==0 && arr[i+1]==arr[i+2]){
			cout<<"first if";
			count =c+count;
			i=i+2;
		}
		else if(arr[i]==arr[i+1] && arr[i+1]!=arr[i+2] && arr[i]==0){
			cout<<"Second if ";
			count =c+count;
			i=i+1;
		}
		else if(arr[i]!=arr[i+1] && arr[i+1]==1){
			cout<<"third if";
			count =c+count;
			i=i+2;	
		}
	}
	cout<<count;
}
