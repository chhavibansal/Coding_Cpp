#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll n ;
        cin >> n;
        ll a[n];
        for(ll i = 0 ; i < n ; i++)
        cin >> a[i];
        ll times;
        cin >> times;
        ll abox= 0 , bbox = 0;
        ll i = 0 , j = n-1;
        ll sum = 0 ;

        while(i < j){
            ll t;
            t = times*a[j--];  bbox+=1;
            ll k = j+1;
            while((sum+a[i] ) <= t and i < k){
                sum += a[i++] , abox+=1;
            }
            if(sum != t){
                a[i] = sum+a[i]-t;  
            }  sum = 0;
        }
        if(i == j){
            if( bbox > abox) bbox+=1;
            else abox+=1;
            
        }
        cout << abox<<" "<< bbox<<"\n";

    }
}