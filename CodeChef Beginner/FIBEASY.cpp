#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int arr[10000000];
void fact(){
    arr[0] = 0;
    arr[1] = 1;
    for(ll i = 2 ; i < 10000000 ; i++){
        int val = (arr[i-2] + arr[i-1])%10;
        arr[i] = val;
    }
}
int main(){
    int t;
    cin >> t;
    fact();
    while(t--){
        ll n ;
        cin >> n;
        int val = log2(n); 
        ll index = pow(2,val);
// cout << index << " ";
        cout << arr[index-1] << endl;
    }
}