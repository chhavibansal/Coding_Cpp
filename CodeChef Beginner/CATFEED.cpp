#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll n, m ;
        cin >> n >> m;

        ll freq[n+1]={0};
        ll a[m];
        for(int i = 0 ; i< m ; i++)
        cin >> a[i];
    int maxc = 0, flag = 0;
        for(int i = 0 ; i < m ; i++){
            freq[a[i]]+=1;
            if(maxc > freq[a[i]]){
                cout << " NO\n";
                flag = 1;
                break;
            }
            if(freq[a[i]] > maxc )
            maxc = freq[a[i]];

        }

        for(int i = 1 ; i <= n && flag != 1; i++){
            if(freq[i]+1 < maxc){
             flag = 1 ; cout <<"NO\n";
             break;   }
        }
        // for(int x: freq)
        // cout << x <<" ";
        // cout <<"\n";
  
        if(flag == 0){
            cout << "YES\n";
        }
    }
}