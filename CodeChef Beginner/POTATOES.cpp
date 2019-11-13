#include"bits/stdc++.h"
using namespace std;
void primes(vector<int> & p){
    p[1] =0;
    p[2] = 1;
    // possible primes
    for(int i = 3 ; i < 10001; i+=2)
    p[i] = 1;
    for(int i = 3 ; i < 10001 ; i+=2){
        if(p[i]){
            for(int j = i*i ; j< 10001 ; j+=i)
            p[j] = 0;
        }
    }
}
int main(){
    int t;
    cin >> t;
    vector<int> p(10001 , 0);
    primes(p);
    while(t--){
        int  a,b;
        cin >> a >> b;
        int sum  = a+b;
        int ans;
        for(int i = sum+1 ; i < 10001 ; i++ ){
            if(p[i]){
                ans = i;
                break;
            }
        }
        cout << ans-sum << endl;
        
    }
}