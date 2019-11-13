#include<iostream>
using namespace std;
int unimodal(int arr[],int n){
//	int prev_diff=0;
int i=0;
while (arr[i] > arr[i - 1] && i < n) 
        ++i; 
    while (arr[i] == arr[i - 1] && i < n) 
        ++i; 
	while (arr[i] < arr[i - 1] && i < n) 
        ++i; 
	return (i==n);
}
int main(){
//	int arr[]={5,7,11,2,1};
	int n;
	cin>>n;
	int arr[n]={0};
	for(int i=0;i<n;i++) cin>>arr[i];
//	int n=sizeof(arr)/sizeof(arr[0]);
	int val=unimodal(arr,n);
	(val==1)?cout<<"YES":cout<<"NOPE";
}
