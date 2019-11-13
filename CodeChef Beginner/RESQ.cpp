#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> factor;
        int diff = INT_MAX;
        for(int i = 1; i <= sqrt(n) ; i++ ){
            if(n%i == 0){
                diff =  min(diff , abs(i - n/i));
            }
        }
        cout << diff << endl;
    }
}