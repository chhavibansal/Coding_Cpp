#include<bits/stdc++.h>
using namespace std;
void longstPal(string s){
    int n = s.size();
    vector<vector<int>> dp(n , vector<int>(n,0));
    for(int i = 0 ; i < s.size() ; i++)
    dp[i][i] = 1;
int maxLen = 1;
    // len 2 substring
    for(int i = 0 ; i < n -1; i++){
        if(s[i] == s[i+1]){
            dp[0][i+1] = 1;
            maxLen = 2;
        }
    }
    int startIndex  = 0;
    for(int len = 3 ; len < n ; len++ ){
        for(int i = 0 ; i < n-len+1 ; i++){
            int j = i+len-1; // 0 + 3 -1 
            if(dp[i+1][j-1] == 1 && s[i] == s[j]){
                dp[i][j] = 1;
                if(len > maxLen)
                    maxLen = len , startIndex = i ;
            }
        }
    }    
    cout << s.substr(startIndex , startIndex+maxLen);
}
int main(){
    string s ;
    cin >> s;
    longstPal(s);
}