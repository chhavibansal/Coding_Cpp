#include<iostream>
using namespace std;
typedef long long int ll ;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll ans = -1;
        ll s = 0 , e = n;
        while( s <= e ){
            ll m =   s+(e-s)/2;
            ll cal = (m*(m+1))/2;
            if(cal == n){
                ans = m;
                break;
            }
            if(cal < n){
                ans = m; 
                s = m+1;
            }else 
            e = m-1;
            

        }
        cout << ans <<"\n";
    }
}