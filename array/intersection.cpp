#include<bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int> a,vector<int> b){
    int i;
    int arr[100000]={0};
    for(i=0;i<b.size();i++){
        if(arr[b[i]]==0) arr[i]=1;
        else continue;
    }
    vector<int> v;
    for(i=0;i<a.size();i++){
        if(arr[a[i]]==1) {v.push_back(a[i]);
        arr[a[i]]++;}
    }
    return v;
}
int main(){
    int i;
    vector<int> a,b;
    int x;
    int n,m;
    cout<<"Enter size\n";
     cin>> n>>m;
    for(i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    for(i=0;i<m;i++){
        cin>> x;
        b.push_back(x);
    }
    vector<int> res=intersection(a,b);
    for(auto it=res.begin();it != res.end(); i++){
        cout<<*it<<" ";
    }
    // int k;
    //  cin>>k;
    //  subsetproblem(arr,n,k);
}