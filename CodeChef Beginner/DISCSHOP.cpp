#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s = to_string(n);
        int MAX = -1, f = 0 , pos_zero = 0 ,index = -1;
        for(int i = 0 ; i <s.size() ; i++){
            int dig = s[i]-'0';
            if(dig >= MAX){
                MAX = dig; index = i;
            }
            else {
                f = 1;
                pos_zero = i;
                 break;
            }
        }
        // cout << index<<" ";
        s.erase(s.begin()+index);
        int i = -1;
        while(s[++i] == '0') s.erase(s.begin());
        if(s[0] == '0')s.erase(s.begin());
        cout << s<<"\n";
    }
}