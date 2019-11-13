#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int a,b, k;
        cin >> a >> b >> k; 
        int minc = min(a,b);
        int maxc = max(a,b);
        int diff = maxc - min(minc + k , maxc);
        
        //3  1 4
        // if(a > b ){
        //     int z = b;
        //     b+= min(a-b , k);
        //     k -= a-z;
        // }else if(b > a){
        //     int z = a ;
        //     a+= min(b-a , k);
        //     k-= b-z; 
        // }
        // if( k < 0){
        //     diff = abs(a-b); f = 1;
        // }
        // else
        //     diff  = k%2;
        // //     k/=2;
        // // }
        cout << diff <<"\n";
    }
}