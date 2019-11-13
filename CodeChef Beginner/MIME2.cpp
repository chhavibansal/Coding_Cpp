#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    map<string, string> mp;
    while (n--)
    {
        string a, b;
        cin >> a >> b;
        mp[a] = b;
    }
    while (m--)
    {
        string str;
        cin >> str;
        int n = str.size();
        int i = n - 1;
        while (str[i] != '.' && i >= 0)
        {
            i--;
        }
        if (i < 0)
        {
            cout << "unknown" << endl;
            continue;
        }

        string sub = str.substr(i + 1, n - 1);
        auto itr = mp.find(sub);
        if (itr != mp.end())
        {
            cout << mp[sub] << endl;
        }
        else
        {
            cout << "unknown" << endl;
        }
    }
}
