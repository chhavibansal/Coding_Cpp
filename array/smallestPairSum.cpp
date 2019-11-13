//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void smallestPairSum(int arr[],int n){
	int sum_smallest=INT_MAX;
	int val_i_smallest=-1;
	for(int i=0;i<n-1;i++){
		int sum=arr[i]+arr[i+1];
		if(sum< sum_smallest){
			val_i_smallest=i;
			sum_smallest=sum;
		}
	}
	cout<<"Smallest sum "<<sum_smallest<<endl;
	cout<<"Corresponding index value  "<<arr[val_i_smallest]<<" "<<arr[val_i_smallest+1];
}
int main(){
	int arr[]={40,3,11,31,1,0,23,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	smallestPairSum(arr,n);
}
