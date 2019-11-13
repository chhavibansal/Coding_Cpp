#include<bits/stdc++.h>
using namespace std;
void pickingNumbers(vector<int> arr) {
     sort(arr.begin(),arr.end());
    for(auto it=arr.begin();it != arr.end();it++)
    cout<<*it<<" ";
    cout<<endl;
     int i;
    map<int,int> mp;
    for(int x:arr)
    mp[x]++;
    int len=arr.size();
    cout<<mp[arr[len-2]]<<" "<<mp[arr[len-1]]<<endl;
    // cout<<mp[2];
    
    int val=0,max_val=INT_MIN;
    for(i=1;i<len;i++){
        if(abs(arr[i]-arr[i-1]) <= 1){
            val=mp[i-1]+mp[i];
            if(val>max_val) max_val=val; cout<<max_val<<" ";
        }
    }
    cout<<max_val;
    // return max_val;
}
int main(){
    int n,i; cin>>n;
    int num;
    vector<int> v;
    for(i=0;i<n;i++) cin>>num, v.push_back(num);
    pickingNumbers(v);
    // cout<<max_val;
}