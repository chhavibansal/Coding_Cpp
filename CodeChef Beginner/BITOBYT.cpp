#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
     	long long int n;
		cin >> n;

		long long int cyc = n / 26;

		long long int rem = n % 26;


		long long int p;
		if(n%26==0)
			p = pow(2,cyc-1);
		else
			p = pow(2,cyc);

		if (rem>=1 && rem <= 2)
			cout << p << " " << 0 << " " << 0 << endl;
		else if (rem > 2 && rem <= 10)
			cout << 0 <<   " " << p << " " << 0 << endl;
		else
			cout << 0 << " " << 0 << " " << p << endl;

        
    }
}