#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
        cin >> n;
    while(n != 0){
        
        int a[n];
        int inv[n];
        for(int i = 1 ; i <= n ; i++){
            cin >> a[i];
            inv[a[i]] = i;
        }
        int flag = 0;
        for(int i = 1 ; i <= n ;i++){
            if(a[i] != inv[i]){
                flag = 1;
            }
        }
    if(flag == 0)
    cout << "ambiguous\n";
    else cout <<"not ambiguous\n";
        cin >> n;
    }
}