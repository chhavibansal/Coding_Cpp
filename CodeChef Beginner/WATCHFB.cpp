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
        int s_a = 0, s_b = 0;
        int s = 1;
        int z;
        cin >> z; 
        while (z--)
        {
            ll q, a, b;
            cin >> q >> a >> b;
            if (s == 1)
            {
                if (q == 2)
                {
                    cout << "NO\n";
                }
                else
                {
                    s_a = a, s_b = b;
                    cout << "YES\n";
                }

                s = 0;
            }
            else
            {
                if (q == 1)
                {
                    s_a = a, s_b = b;
                    cout << "YES\n";
                }
                else
                {
                    if (a == b)
                    {
                        s_a = a, s_b = a;
                        cout << "YES\n";
                        // break;
                    }
                    else if ((s_a < a or s_a < b) and (s_a >= a or s_b >= b))
                    {
                        s_a = max(a, b);
                        s_b = min(a, b);
                        cout << "YES\n";
                        // break;
                        // return;
                    }
                    else if((s_b < a or s_b < a ) and (s_a == a or s_a == b)){
                        s_a = s_a;
                        s_b = min(a,b);
                        cout <<"YES\n";
                    }
                    else cout << "NO\n";
                }
            }
        }
    }
}