#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0 ; i < n ; i++)
        cin >> a[i];

        int dp[n]={1};
        for(int i = 0 ; i < n; i++) dp[i] = 1;
        for(int i = n-2 ; i>=0 ; i--){
            if((a[i] > 0 and a[i+1] < 0) or (a[i] < 0 and a[i+1] > 0))
            dp[i] = dp[i+1]+1;
        }
        for(int x : dp)
        cout << x <<" ";
        cout <<"\n";
    }
}