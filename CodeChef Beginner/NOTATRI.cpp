#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int n;
    cin >> n;
    while(n != 0){
        // int n;
        // cin >> n;
        ll a[n];
        for(int i = 0 ;i < n ; i++)
            cin >> a[i];
        sort(a, a+n);
        int count = 0;
        for(int i = 0 ; i < n-1 ; i++){
            int r = n-1 , l = i+1;
            while( l < r){
                if(a[i]+a[l] < a[r])
                count++;
                else break;
                l++;
            }
        }
        cout << count << "\n";

        cin >> n;
    }
}