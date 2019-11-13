#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    int rem = t%6;
    
    if(rem == 0) cout <<"yes\n";
    else if( rem == 3) cout <<"yes\n";
    else if ( rem== 1) cout << "yes\n";
    else cout << "no\n";
}