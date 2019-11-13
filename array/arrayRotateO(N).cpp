#include<iostream>
using namespace std;
void print(int arr[],int n){
	cout<<endl;
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
int gcd(int a,int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
void leftRotate(int arr[],int d,int n){
	for(int i=0;i<gcd(d,n);i++){
		int temp=arr[i];
		int j=i;
		while(1){
			int k=j+d;
			if(k>=n)
			k=k-n;
			if(k==i)
			break;
			arr[j]=arr[k];
			j=k;
		}
		arr[j]=temp;
	}
}
int main(){
	int i,n,t;
	cin>>n;
	int arr[n]={0};
	for(i=0;i<n;i++) cin>>arr[i];
	cin>>t;
	leftRotate(arr,t,n);
	print(arr,n);
}
