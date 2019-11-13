#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
       string j , s;
       cin >> j >> s;
       int count[257]={0};
       for(int i = 0 ; i < j.size() ; i++){
           count[j[i]] = 1;
       }
       int ans = 0;
       for(int i = 0 ; i < s.size() ; i++){
           if(count[s[i]] == 1)
           ans+=1;
       }
       cout << ans <<endl;
    }
}