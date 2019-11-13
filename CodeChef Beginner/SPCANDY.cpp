#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll c , n;
        cin >> c >> n;
        if(n == 0){ cout << "0 "<<  c <<"\n";}
        else{
        cout << c/n <<" "<< (c-(n*(c/n))) <<"\n";    
        }
        
    }
}