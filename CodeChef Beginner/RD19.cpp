#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n];
        for(ll i = 0 ; i < n ; i++)
        cin >> a[i];
        ll ans = 0;
        sort(a , a+n);
        ll i = 0 , j = n-1;
        while( i < j ){
            ll sum = abs(a[j--]-a[i++]);

            ans+= sum;
        }
        cout << ans <<"\n";
    }
}