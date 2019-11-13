#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
ll dp[10001][10001];
char matrix[10001][10001];
void solve(){
    ll n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++)
        cin >> matrix[i][j];
    }
    memset(dp, 0 , sizeof(dp));
    for(ll i=0;i<n;i++)
		for(ll j=n-1;j>=0;j--)
            if(matrix[i][j] == '#')
            break;
            else dp[i][j] = 1;
    
    ll c = 0;
	for(ll i=0;i<n;i++)
		for(ll j=n-1;j>=0;j--){
            if(matrix[i][j] == '#')
            break;
            if(dp[i][j] == 1)
            c+=1;
        }
    
    cout << c << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
       solve();

    }
}