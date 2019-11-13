#include <iostream>
#include <cmath>
using namespace std;
void subsequences(int a[], int n, int k)
{
    int count = 0, sum_m = 1000000;
    for (int i = 0; i < (1 << n); i++)
    {
        int size = 0, sum = 0;
        int val = i, pos = 0;
        while (val > 0)
        {
            if (val & 1 == 1)
            {
                size += 1;
                sum += a[pos];
            }
            pos += 1;
            val >>= 1;
        }
        if (size == k)
        {
            if (sum < sum_m)
            {
                sum_m = sum, count = 1;
            }
            else if (sum == sum_m)
                count += 1;
            else
            {
            }
        }
    }
    cout << count <<"\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        subsequences(a, n, k);
    }
}
