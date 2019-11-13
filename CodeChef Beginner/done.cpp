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
        int index = -1 , MAX = -1 ;
        for(int i = 0 ; i < s.size() ; i++){
            int digit = s[i]-'0';
            if(digit >= MAX){
                MAX = digit; index = i;
            }else{
                break;
            }
        }
        s.erase(s.begin()+index);
        int i = -1;
        while(s[++i] == '0') s.erase(s.begin());
        if(s[0] == '0') s.erase();
        cout << s<<"\n";
    }
}