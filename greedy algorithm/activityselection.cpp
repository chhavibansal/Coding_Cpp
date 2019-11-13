//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Activity(int s[],int f[],int n){
	int i,j;
	i=0;
	cout<<i;
	for(j=1;j<n;j++){
		if(f[i]<=s[j]){
			cout<<" "<<j;
			i=j;
		}
	}
}
int main(){
	int s[]={1,3,0,5,8,5};
	int f[]={2,4,6,7,9,9};
	int n=sizeof(s)/sizeof(int);
//	cout<<n;
//	Activity(s,f,n);
	int arr[6]={8,1,9, 11,23,0};
	sort(arr,arr+6,greater<int>());// decreasing
	for(int i=0;i<6;i++){
		cout<<arr[i]<<' ';
	}
	
}
