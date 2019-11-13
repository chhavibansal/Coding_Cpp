#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main(){
    int t , count = 0;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int counta = 0, countb = 0;
        for(int i = 0 ; i < s.size() ; i++){
         if(i&1){
                 if(s[i] !='-')
                 counta+=1;
            }else
            {
                if(s[i] !='+')
                counta+=1;
            }
        }
        for(int  i = 0 ;i < s.size() ; i++){
            if(i&1){
                 if(s[i] !='+')
                 countb+=1;
            }else
            {
                if(s[i] !='-')
                countb+=1;
            }
        }
        int ans = min(counta , countb);
        cout << ans << endl;
    }
}