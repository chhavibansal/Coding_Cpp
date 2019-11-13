#include<iostream>
using namespace std;
void print(int arr[],int n){
	cout<<endl;
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
void rotateOne(int arr[],int n){
	int i,temp=arr[0];
	for(i=0;i<n-1;i++)
	arr[i]=arr[i+1];
	arr[i]=temp;
}
void rotateLeft(int arr[],int d ,int n){
	for(int i=0;i<d;i++)
	rotateOne(arr,n);
}
int main(){
	int i,n,t;
	cin>>n;
	int arr[n]={0};
	for(i=0;i<n;i++) cin>>arr[i];
	cin>>t;
	rotateLeft(arr,t,n);
	print(arr,n);
}
