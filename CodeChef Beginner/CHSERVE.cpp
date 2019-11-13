#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll a , b , k;
        cin >> a >> b >> k;
        ll sum = a+b;
        ll next(sum);
        int ans = next%(2*k);
        // cout << ans <<" ";
        if(ans >= k)
            cout <<"COOK\n";
        else
        {
            cout <<"CHEF\n";
        }
        
        // turn of chance when rem = 0  & cook is done
        
    }
}