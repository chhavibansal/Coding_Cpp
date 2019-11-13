#include "iostream"
#include "cmath"
using namespace std;
typedef long long int ll;
const unsigned int M = 1000000007;
ll fact[1000009];
void factorial(){
      fact[1000001] = {0};
        fact[1] = 1;
        for (ll i = 2; i < 1000001; i++)
        {
            ll s = fact[i - 1] % M;
            ll j = i % M;
            fact[i] = (s * j) % M;
        }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    factorial();
    int t;  
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll prod = fact[n];
        for(int i = n-1 ; i >=1 ; i--){
             prod  = (prod%M * fact[i]%M)%M;
        }
        

        cout << prod << "\n";
    }
}