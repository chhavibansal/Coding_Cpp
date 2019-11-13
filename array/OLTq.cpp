#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n]={0};
    int i,max=INT_MIN;
    
    for(i=0;i<n;i++) {cin>>arr[i]; if(arr[i] >max) max=arr[i];}
    int next[max+1]={0};
    for(i=0;i<n;i++){
        if(arr[i]>0){
            next[arr[i]]=1;
        }
    }
    int val=0;
    for(i=1;i<=max;i++){
        if(next[i] == 0){
            cout<<i; break;
        }
        val=i;
    }
    if(val == max) cout<<max+1;
}