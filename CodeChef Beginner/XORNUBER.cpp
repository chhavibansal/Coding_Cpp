#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int temp = n , count = 0;
        while(temp){
            if(!(temp&1)) break;
            temp >>=1;
            count+=1;

        }
        if(temp != 0) cout <<"-1\n";
        else if(n == 1) cout <<"2\n";
        else {
            int ans = 1 << (count-1);
            ans--;
            cout << ans <<"\n";
        }
    }
}