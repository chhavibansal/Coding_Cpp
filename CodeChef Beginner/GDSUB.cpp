#include"bits/stdc++.h"
using namespace std;
void distinct(string s, int n){
    int dp[n+1]={0};
    int last_occ[256];
    for(int i = 0 ; i < 256; i++)
    last_occ[i] = -1;

    dp[0] = 1;
    for(int i  = 1; i <= n ; i++){
        dp[i] = 2*dp[i-1];
        if(last_occ[s[i-1]]  != -1){
            dp[i] = dp[i] - dp[last_occ[s[i-1]]];
        }
        last_occ[s[i-1]] =(i-1);
        cout << dp[i] <<"  ";
    }
    cout << dp[n];
}
int main(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    distinct(s , n);
}