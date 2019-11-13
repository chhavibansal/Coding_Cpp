#include<iostream>
using namespace std;
typedef long long int ll;
    const unsigned int M = 1000000007; 
int main(){
    ll  n , k;
    cin >> n >> k;
    ll a[n];
    for(ll i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    ll prod = 1  , i  = n-1;
    while(i>0){
        prod = ((prod%M )*a[i])%M;
        if(i < k)
        i=0;
        else i-=k;
    }
    prod = ((prod%M)* a[i])%M;
    cout << (prod%M)<<"\n";
}