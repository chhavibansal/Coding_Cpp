#include<iostream>
using namespace std;
void print(int arr[],int n){
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
void split_arr(int arr[],int n,int pos){
	int i,val;
	for(i=0;i<pos;i++){
		val=arr[0];
		for(int j=0;j<n-1;j++)
		arr[j]=arr[j+1];
		
		arr[n-1]=val;
	}
	print(arr,n);
}
int  main(){
	int arr[]={3,41,12,54,91,21,20};
	int pos;
	int n=sizeof(arr)/sizeof(arr[0]);
	cin>>pos;
	
	split_arr(arr,n,pos);
}
