#include<bits/stdc++.h>
using namespace std;
void missing(int arr[],int n){
	sort(arr,arr+n);
	for(int j=0;j<n;j++) cout<<arr[j]<<" ";
	cout<<endl;
	int i,validity=0,num=-1;
	for(i=0;i<n-1;i++){
		if((arr[i+1]-arr[i])==2)
		{
			validity=-1; num=arr[i]; break;
		}
	}
	(validity==-1)?cout<<"Missing number "<<num+1:cout<<"fine";
}
int main(){
	int arr[]={1,2,7,9,4,5,10,6,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	missing(arr,n);
}
