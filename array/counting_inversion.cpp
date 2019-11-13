#include<bits/stdc++.h>
using namespace std;
int mergeSort(int arr[],int n){
    int *temp=(int*)malloc(sizeof(int )*n);
    return _mergeSort(arr,temp,0,n-1);
}
int  merge(int arr[],int temp[],int left,int mid,int right){
    int i,j,k,inv_count=0;
    i=left;
    j=mid;
    k=right;
    
    while((i<=mid-1) && (j <= right)){
        /* code */
        if(arr[i] <= arr[j]) temp[k++]=arr[i++];
        
        else
        {
            temp[k++]= arr[j++];
            inv_count+ =    (mid-i);
        }
        
    }
          while (i <= mid - 1) 
        temp[k++] = arr[i++]; 
    while (j <= right) 
        temp[k++] = arr[j++]; 
    for (i = left; i <= right; i++) 
        arr[i] = temp[i]; 
  
    return inv_count; 
} 
    
}
int _mergeSort(int arr[],int temp[],int left,int right){
    int mid,inv_count=0;
    if(right > left){
        mid = (right + left)/2;
        inv_count = _mergeSort(arr,temp,left,mid);
        inv_count+ = _mergeSort(arr,temp,mid+1,right);
        inv_count + = merge(arr,temp,left,mid+1,right);

    }
    return inv_count;
}

int main(){
    int n; cin>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++) cin>>arr[i];
    mergeSort(arr,n);
}