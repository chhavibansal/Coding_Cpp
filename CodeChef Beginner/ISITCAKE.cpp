#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int a[10][10];
        int count = 0 , flag = 0;
        for(int i = 0 ; i < 10 ; i++){
            for(int j = 0 ; j < 10 ; j++){
                int x;
                cin >> x; a[i][j] = x;
                if(x <= 30)
                count+=1;
                if(count >= 60) flag = 1;
            }
        }
        if(flag == 1)cout << "yes\n";
        else cout << "no\n";
    }
}