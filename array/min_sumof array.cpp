#include<bits/stdc++.h>
using namespace std;
void minSum(int arr[],int n){
	int sum_till_now,i,min_sum=INT_MAX;
	int start,end,s=0;
	for(i=0;i<n;i++){
		sum_till_now=sum_till_now+arr[i];
		if(sum_till_now<min_sum){
			min_sum=sum_till_now;
			start=s;
			end =i;
		}
		
		if(sum_till_now>0){
			sum_till_now=0;
			s=i+1;
		}
		
		
	}	
	cout<<"Start "<<start+1<<endl;
	cout<<"End "<<end+1<<endl;
	cout<<"Minimum sum from array is "<<min_sum;
}
int main(){
	int arr[]={3,-4,2,-3,-1,7,-5};
	int n=sizeof(arr)/sizeof(arr[0]);
	minSum(arr,n);
}
