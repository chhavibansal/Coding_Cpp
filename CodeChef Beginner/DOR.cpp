#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void ORrange(ll l , ll r){
    int lorr =l|r;
    int msb = 0;
    while(lorr ){
        msb+=1;
        lorr>>=1;
    }
    int max = 0;
    int two = 1;
    while(msb--){
        max+= two;
        two<<=1;
    }
    cout << max<<"\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll l ,r;
        cin >> l >> r;
        if(l  > 10e12){

        ll ans = l;
        for(ll i = l+1 ; i <= r; i++)
        ans |= i;
        cout << ans<<"\n";
        }
        else if(l+1 == r){
            ll ans = max(l|r , max(l,r));
            cout << ans <<"\n";
        }
        else
        ORrange(l,r);
    }
}