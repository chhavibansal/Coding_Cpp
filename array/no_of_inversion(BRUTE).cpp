#include<iostream>
using namespace std;
void merge(int arr[],int f,int m,int l){
	int n1=m-f+1;
	int n2=l-f;
	int l[n1],r[n2];
	int i,j,k;
	for(i=0;i<n1;i++) l[i]=arr[l+i];
	for(i=0;i<n2;i++) r[i]=arr[m+1+i];
	
}
void split(int arr[],int f,int l){
	if(f<l){
		int mid=f+(l-f)/2;
		cout<<mid<<" ";
		split(arr,f,mid);
		split(arr,mid+1,l);
		merge(arr,f,mid,l);
	}
}
int main(){
	int arr[]={2,4,1,3,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	split(arr,0,n-1);
//	int i,j,count=0;
//	for(i=0;i<n;i++){
//		for(j=i+1;j<n;j++){
//			if(arr[i]>arr[j])
//				count=count+1;
//		}
//	} l
//	cout<<count;
}
