#include"bits/stdc++.h"
using namespace std;
#define fo(i ,n ) for(i = 0 ; i < n ;i++)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m , n , o;
    cin >> m >> n>> o ;
    int a[m], b[n], c[o];
    int i ,x;
    map<int,int> mp;
    fo(i,m){
         cin >> x;
        mp[x]++;
    }
    fo(i,n) {
        cin >> x;
        mp[x]++;
    }
    fo(i , o){
        cin >> x;
        mp[x]++;
    }
    vector<int> vec;
    int count = 0;
    for(auto it =  mp.begin() ; it != mp.end() ; it++){
        if(it->second >= 2)
        vec.push_back(it->first) , count+=1;
    }
    cout << count <<"\n";
    fo(i , vec.size())
    cout << vec[i]<<"\n";
   
}