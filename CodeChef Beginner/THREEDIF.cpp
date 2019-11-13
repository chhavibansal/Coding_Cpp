#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
const int MOD = 1000000007;
                
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>> t;
    while(t--){
        ll a[3];
        for(int i = 0; i < 3 ; i++)
        cin >> a[i];

        sort(a , a+3);

        ll ans = (((a[0]%MOD)* ((a[1]-1)%MOD)%MOD)*((a[2]-2)%MOD))%MOD ;
        cout << ans <<"\n";
    }
}