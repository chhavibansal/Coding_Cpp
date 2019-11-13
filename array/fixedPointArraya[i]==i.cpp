#include<iostream>
using namespace std;
//fixedpoint in sorted array a[i]==i
int fixedPoint(int arr[],int l,int r){
	if(l<r){
		int mid=l+(r-l)/2;
		if(arr[mid]==mid) return mid;
		if(arr[mid]>mid)
		fixedPoint(arr,l,mid-1);
		else
		fixedPoint(arr,mid+1,r);
	}
	return -1;
}
int main(){
	int arr[]={-10, -1, 0, 3, 10, 11, 30, 50, 100}; 
	int size=sizeof(arr)/sizeof(arr[0]);
	fixedPoint(arr,0,n-1);
}
