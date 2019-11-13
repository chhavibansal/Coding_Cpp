//inversion in array
#include<iostream>
using namespace std;
void merge(int arr[],int f,int m,int l){
	int n1=m-f+1;
	int n2=l-m;
	int L[n1],R[n2];
	int i,j,k=0;
	for(i=0;i<n1;i++) L[i]=arr[f+i];
	for(j=0;j<n2;j++) R[j]=arr[m+j+1];
	i=0,j=0;
	int inv=0;
	while(i<n1 && j<n2){
		if(L[i]<=R[j]){
			arr[k]=L[i];
			k++; i++;
		}
		else{
			arr[k]=R[j];
			inv=inv+(n1-i);
			j++; k++;
		}
	}
	while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  	while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
    
}

void print(int arr[],int n){
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
void Sort_count(int arr[],int f,int l){
	if(f<l){
		int mid=f+(l-f)/2;
		Sort_count(arr,f,mid);
		Sort_count(arr,mid+1,l);
		merge(arr,f,mid,l);
	}
}
int main(){
	int arr[]={1,3,5,2,4,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	Sort_count(arr,0,n-1);
	print(arr,n);
}
