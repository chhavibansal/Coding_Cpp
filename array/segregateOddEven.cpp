#include<iostream>
using namespace std;
void swap(int* a,int *b){
	*a=*a^*b;
	*b=*b^*a;
	*a=*a^*b;
}
void Segregate(int arr[],int n){
	int i,j;
	j=i-1;
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			j++;
//			swap(&arr[i],&arr[j]);
			
		}
	}
}
void print(int arr[],int n){
	int i;
	for(i=0;i<n;i++) cout<<arr[i]<<" ";

}
int main(){
	int arr[]={17,15,8,12,10,5,4,1,7,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	Segregate(arr,n);
	print(arr,n);
}
