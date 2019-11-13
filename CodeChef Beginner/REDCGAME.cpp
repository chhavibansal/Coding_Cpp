#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll n , k;
        cin>> n>>k;
        int a[n]={0};
        ll sum = 0;
        for(ll i = 0 ; i < n; i++)
        cin >>a[i];
        sort(a,a+n);
        for(int i = 1 ; i < n; i++){
            while(min(a[i-1],a[i]) > k){
                a[i-1]-=1, a[i]-=1;
            }
        }
        for(ll x: a)
        sum+= x;
        
        cout << sum <<endl;
    }
}