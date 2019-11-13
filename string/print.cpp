#include<bits/stdc++.h>
// #include<vector>
using namespace std;
// void print(vector<string> v){

//     for(int i=0;i<v.size();i++){
//      transform(v.begin(),v.end(),v.begin(),::tolower);
//         cout<<v[0][i]<<" ";
//     }
// }
int fact(int n){
    if(n==1) return 1;
    return(n*fact(n-1));
}
int main(){
    int n; cin>>n;
    // cout<<fact(n);
    int v= n>>1; cout<<v;
    // vector<string> v;
    // while(n--){
    //     string s;
    //     cin>>s;
    //     v.push_back(s);
    // }
    
    // print(v);
}