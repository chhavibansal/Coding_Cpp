#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll a,b,c,d;

        // c useless
        cin >> a >> b >> c >> d;
        ll sum = (a+b+c+d)/4;

        ll MIN = 10e9+1;
        MIN = min(a,min(b,min(sum , d)));
        cout << MIN <<"\n";
    }   
}