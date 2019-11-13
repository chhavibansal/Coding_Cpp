#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,k,m;
		cin>>n>>k>>m;
		ll lambda = (m*(m+1))/2;
		ll tot=max(n+k-2*lambda, max(n-k, k-n));
		cout<<tot<<endl;
    }
}