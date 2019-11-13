#include<iostream>
using namespace std;
int binary_search(int arr[],int f,int l,int val){
    int mid;
    if(f<=l){
         mid=f+(l-f)/2;
        if((arr[mid] == val) && ( mid==0 || val>arr[mid-1])) return mid+1;
        if(arr[mid] > val)   return binary_search(arr,f,mid-1,val);
          return binary_search(arr,mid+1,l,val);
    }
    return -1;
}
int main(){
    //binary search
    int n; cin>>n;
    int arr[n]={0};
    cout<<"enter elements in sorted order";
    for(int i=0;i<n;i++) cin>>arr[i];
    int k;
    cout<<"\n enter element to be searched";
    cin>>k;cout<<endl;
   cout<< binary_search(arr,0,n-1,k);
}
