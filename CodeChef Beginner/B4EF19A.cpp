#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int r, h, c;
        cin >> r >> h >> c;
        // 27 19 3

        int COAL = c*8;
        int hunger = (h+1)/2;
        int raw = r;
        int MIN = min (raw , min(COAL , hunger));

        int ans = (raw-MIN)/3;
        cout << ans <<"\n";

    }
}