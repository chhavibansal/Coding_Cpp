#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >>t ;
    while(t--){
        ll n,b,m;
        cin >> n >> b >> m;
        // no fo q 
        // break time
        // minutes per q
        unsigned long long int ans = 0;
        while(n){
            ll now = (n+1)/2;
            ans+= (now*m);
            ans+= b;
            m<<=1;
            n = n- now;
        }
        ans-= b;
        cout << ans <<"\n";
    }
}
