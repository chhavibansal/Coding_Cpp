#include<bits/stdc++.h>
using namespace std;
vector<int> closestNumb(vector<int> arr){
    vector<int> min;
    int i,diff_min=INT_MAX;
    sort(arr.begin(),arr.end());
    for(i=0;i<arr.size()-1;i++){
        if(arr[i+1]- arr[i] < diff_min) diff_min=arr[i+1]-arr[i];
    }
    for(i=0;i<arr.size()-1;i++){
        if(arr[i+1]-arr[i] == diff_min) min.push_back(arr[i]),min.push_back(arr[i+1]);
    }
    return min;
}
int main(){
    int n,i,num;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++) cin>>num, arr.push_back(num);
    vector<int> p1;
    p1=closestNumb(arr);
    for(int x: p1) cout<<x <<" ";
}