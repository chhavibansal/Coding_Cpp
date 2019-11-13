#include<iostream>
using namespace std;
void nextGreater(int arr[],int n){
	int i,j,max=-1;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]<arr[j]){
				max=arr[j];
				cout<<arr[i]<<"    "<<arr[j]<<endl;
//				continue;
				break;
			}
		}
		if(max==-1) cout<<arr[i]<<"   -1"<<endl;
	}
	cout<< arr[n-1]<<"   -1"<<endl;
}
int main(){
	int n,i;
	cin>>n;
	int arr[n]={0};
	for(i=0;i<n;i++) cin>>arr[i];
	nextGreater(arr,n);
}
