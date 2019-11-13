#include"bits/stdc++.h"
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int min = INT_MAX;
        int sum = 0;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i] ; if(a[i] < min) min = a[i];
            sum+=a[i];
        }

        int ans = sum - n*min;

cout << ans <<"\n";
    }
}