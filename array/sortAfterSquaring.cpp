#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={-6,-2,-1,4,5,2};
	int n= sizeof(arr)/sizeof(arr[0]);
	int i;
	for(i=0;i<n;i++)
	arr[i]=arr[i]*arr[i];	
	sort(arr,arr+n);
	for(i=0;i<n;i++) 
	cout<<arr[i]<< " ";
}

