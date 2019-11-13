#include<iostream>
using namespace std;
void print(int arr[],int n){
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
void reverse(int arr[],int start,int end){
	while(start<end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
	
}
int main(){
	int arr[]={2,4,5,1,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	reverse(arr,0,n-1);
	print(arr,n);
}
