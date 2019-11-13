#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,i,max_sum=0;
//	int arr[]={1,4,2,10,23,3,1,0,20};
	int arr[]={100,200,300,400};
	int n=sizeof(arr)/sizeof(arr[0]);
	cin>>k;
	int sum_firstwindow=0;
	if(k>n) cout<<"Invalid";
	else{
	for(i=0;i<n;i++){
		if(i<k){
			sum_firstwindow=sum_firstwindow+arr[i];
		max_sum=sum_firstwindow;
		}
		
		else{
			sum_firstwindow=sum_firstwindow+arr[i]-arr[i-k];
			if(sum_firstwindow>max_sum){
				max_sum=sum_firstwindow;
			}
		}
		
	}
		
	}
	cout<<max_sum;
}
