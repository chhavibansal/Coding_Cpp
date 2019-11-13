#include<bits/stdc++.h>
using namespace std;
bool cmpArray(vector<int>& a , vector<int>& b ){
    map<int, int> mp;
    // vector<int> mp(10);
    if(a.size() != b.size())return false;
    for(auto x : a){
        mp[x]++;
    }
    
    for(int x = 0  ; x < b.size() ; x++){
        // elemtn does not exists in map
        if(mp.find(b[x]) == mp.end())
        return false;

        if(mp[b[x]] == 0 ) return false;

        mp[b[x]]--;
        // element occurs fewer no of time
    }
    return true;
}
int main(){
    vector<int> a = {7,1,3,1};
    vector<int> b = {1,3,7,1};
    cmpArray(a,b) == 1 ? cout <<"yes" : cout << " NO";
}