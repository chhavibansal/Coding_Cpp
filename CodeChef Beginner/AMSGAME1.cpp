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
        for(int i = 0 ; i < n; i++){
            cin >> a[i];
        }
        int cal = a[0];
        for(int i= 1 ; i < n; i++){
            cal = __gcd(cal , a[i]);
        }
        cout << cal <<"\n";
    }
}