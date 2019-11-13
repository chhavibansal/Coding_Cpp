#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ll MAX = 0;
        ll sum = 0, i = 0;
        for (i = 0; i < k; i++)
            sum += a[i];

        for (i = k; i < n; i++)
        {
            if (sum > MAX)
                MAX = sum;
            sum += a[i] - a[i - k];
        }
            if (sum > MAX)
                MAX = sum;
        
        cout << MAX << "\n";
    }
}