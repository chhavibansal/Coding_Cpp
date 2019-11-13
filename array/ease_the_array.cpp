#include<iostream>           
using namespace std;
void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
void ease_the_array(){
	int n,i,j;
	cin>>n;
	int arr[n]={0};
	for(i=0;i<n;i++)cin>>arr[i];
	for(i=0;i<n-1;i++){
		if(arr[i]==arr[i+1]){
			arr[i]=2*arr[i];
			arr[i+1]=0;
		}
	}
	i=-1;
	for(j=0;j<n;j++){
		if(arr[j]!=0){
			i=i+1;
			swap(&arr[i],&arr[j]);
		}
	}
//swap(&arr[1],&arr[0]);
	for(i=0;i<n;i++) cout<<arr[i]<<" ";
	cout<<endl;
}
int main(){
	int i,t;
	cin>>t;
	for(i=0;i<t;i++){
		ease_the_array();
	}
}
