#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
       cin >> a >> b >> c;
       string r,s;
       cin >> r>> s;
       int flag = 0 , xtra = 0;
       if(r.length() < s.length()) flag = 1;
       if(flag == 1 && xtra == 0) { string te = r , r = s , s = te; xtra = 1;}
       int n = (flag == 1 ? r.length() : s.length());
       // s is smaller one 
       // rlarger 
       for(int i =0 ; i <  n - c ; i++){
           
           string temp = s.substr(i, i+c);
           if(r.find(temp) != r.end())
       }
    }
}   