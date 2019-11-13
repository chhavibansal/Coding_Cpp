#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int gcd(ll a, ll b){
    if( b  == 0)
    return a;
    else
    gcd(b , a%b);
}
ll reduce(ll a , string b){
    ll mod = 0;
    for(int i = 0 ; i < b.size() ; i++){
        mod = (mod*10 + b[i]-'0')%a;

    }
    return mod;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll a ;
        string b;
        cin >> a;
        
        cin  >> b;
        
        if( a == 0 ){
            cout << b <<endl;
            continue;
        }
        ll num  = reduce( a , b);
        if(num == 0){
            cout << a << endl;
            continue;
        }
        cout << gcd(a , num)<<endl;
    }
}