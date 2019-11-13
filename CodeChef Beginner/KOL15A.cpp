#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main(){
    int t , count = 0;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        ll sum = 0;
        for(int i = 0 ;i < s.size() ; i++){
            int val = s[i]-'0';
            if( val >=0 && val <= 9)
            sum+= val;
        }
        cout << sum << endl;
    }
}