#include<bits/stdc++.h>
using namespace std;
struct Interval{
	int start,end;
};
bool compareInterval(Interval i1,Interval i2){
	return (i1.start<i2.start);
}
int main(){
	int arr[]={4,19,2,0,13,8};
	int i,n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n);
	for(i=0;i<n;i++)cout<<arr[i]<<' '; //increasing order
	cout<<'\n';
	sort(arr,arr+n,greater<int>());
	for(i=0;i<n;i++)cout<<arr[i]<<' '; //decreasing order
	Interval arr1[]={{6,8},{1,9},{2,4},{4,7}};
	int k=sizeof(arr1)/sizeof(arr1[0]);
	sort(arr1,arr1+n,compareInterval);
	for(i=0;i<n;i++){
		cout<<"["<<arr1[i].start<<","<<arr1[i].end<<"]"; 
	}
}
