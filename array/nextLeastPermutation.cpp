#include<iostream>
using namespace std;
// bool comparison(){}
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
void reverse(int arr[],int s,int l){
    // for(int i=s;i<=l;i++)
    // swap(&arr[i])
    while(s<=l){
        swap(&arr[s],&arr[l]);
        s++;
        l--;
    }    
}
int main(){
    int n,i,index=0,temp;
    int arr[]={2,1,3,4};
    n=sizeof(arr)/sizeof(arr[0]);
    for(i=n-1;i>=0;i--){
        if(arr[i]>arr[i-1]){
            temp=arr[i-1];
             index=i-1;
            break;
        }
        else {
            cout<<"No bigger permutation"; exit;
        }
    }
    for(int j=n-1;j>=index;j--){
        if(arr[j]>temp)
        swap(&arr[j],&temp);
    }
    reverse(arr,index+1,n-1);
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
}