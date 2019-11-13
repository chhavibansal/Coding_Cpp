#include<iostream>
using namespace std;
int binarySearch(int arr[],int f,int l,int val){
	if(f<=l){
		int mid=f+(l-f)/2;
		if(arr[mid]==val)
		return mid;
		
		if (arr[mid]>val)
		return binarySearch(arr,f,mid-1,val);
		
		return binarySearch(arr,mid+1,l,val);
	}
	return -1;
}

int main(){
	int arr[]={3,5,6,12,44,65,91};
	int val_search;
	int n=sizeof(arr)/sizeof(arr[0]);
	cin>>val_search;
	int index=binarySearch(arr,0,n-1,val_search);
	(index==-1)?cout<<"not found":cout<<" found at index "<<index+1;
}
