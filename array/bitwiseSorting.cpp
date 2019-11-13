#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n]={0};
    int i;
    for(i=0;i<n;i++) cin>>arr[i];
    //bitwise manipulation 
    // parity sorting 7 4 2  3 5 6 1        4 2 6 7 3 5 1
    int s=0,l=n;   // 6 4 2 3 5 7 1
    while(s<=l){
        if(arr[s]&1){ //odd number
            if(arr[l]&1) l--;  //odd number 
            else{
                swap(arr[s],arr[l]);
                s++,l--;
            }
        }
        else{
            s++;
        }
    }
    for(i=0;i<n;i++) cout<<arr[i]<<" ";
}