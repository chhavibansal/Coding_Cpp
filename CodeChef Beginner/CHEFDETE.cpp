#include<iostream>
using namespace std;
typedef long long int ll;
int main(){
    ll n,x;
    cin >> n;
    ll a[n+1];
    for(int i = 0 ; i <= n ; i++)
    a[i] = 0;
    for(ll i = 0; i < n ; i++){
        cin >> x;
        a[x]+=1;
    }

    for(int i = 1 ; i <= n  ; i++ ){
        if(a[i] == 0)
        cout << i <<" ";
    }
    cout <<"\n";
}