#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        vector<int> vec(n+1,0);
        for(int i = 1 ; i <= n ; i++){
            int z = i, k = 1;
            while((i*k) <= n){
                vec[z] ^= 1;
                z  = i * (++k);
            }
        
        }
        for(int i = 1 ; i <= n; i++)
        cout << vec[i];
        cout <<endl;
    }
}