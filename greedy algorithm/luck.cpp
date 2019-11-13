#include<bits/stdc++.h>
using namespace std;
struct contest{
    int luck;
    int importance; 
};
bool compare(contest s1,contest  s2){
    // if(s1.luck > s2.luck)
    return (s1.importance < s2.importance );

}
void maxLuck(contest arr[],int n,int k){
    sort(arr,arr+n,compare);
    int count=0;
    for(int i=0;i<n;i++){
        cout<<i+1<< " "<< arr[i].luck<< "  "<< arr[i].importance<<endl;
        if(arr[i].importance == 1) count++;
    }
    // cout<< "count=  "<<count<<endl;
    int sum=0;
    for(int i=0;i<n;i++)
        sum+= arr[i].luck;
        // cout<<sum<<endl;
    // if(k>count){
        
    // }
    // cout<<sum;
    if(k< count){
        for(int i=n-count;i<n-k;i++)
       cout<<arr[i].luck<<" ",
        sum=sum-(arr[i].luck)*2;
    }
    cout<<sum;
    
}
int main(){
    int i,n,k;
    cin>>n>>k;
    contest arr[n];
    int temp1,temp2;
    for(i=0;i<n;i++){
        cin>>temp1>>temp2;
        arr[i]={temp1,temp2};
    }
    maxLuck(arr,n,k);
}