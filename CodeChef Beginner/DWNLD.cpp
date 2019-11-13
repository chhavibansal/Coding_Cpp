#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n][2];
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < 2; j++)
            cin >> a[i][j];
        }

        int i = 0;
        while(k > 0){
            int z = min(k , a[i][0]);
            a[i][0]-= min(k , a[i][0]);
            k-=z;
            i+=1;
        }
        int cost = 0;
        for(int i = 0 ;i  < n ; i++){
            cost+= a[i][0] * a[i][1];
        }
        cout << cost << "\n";
    }
}