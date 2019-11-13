#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,x,max=INT_MIN;
    cin>>n;
    int i,arr[10000]={0};
    for(i=0;i<n;i++){
        cin>>x;
        if(x>0){
            arr[x]=1;
        }
        if(x > max) max=x;
    }
    int val=0;
    for(i=1;i<=max;i++){
        if(arr[i] == 0) {cout<<i;
        break;}
        val=i;
    }
    if(val == max) cout<<max+1;
}