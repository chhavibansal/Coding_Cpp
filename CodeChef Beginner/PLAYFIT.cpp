#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>> t;
    while(t--){
        int n;
        cin >> n;
        int goals[n];
        for(int i = 0; i < n ; i++){
            cin >> goals[i];
        }
        int maxD = 0;
        int rightMax[n];
        rightMax[n-1] = 0;
        for(int i = n-2; i >= 0 ; i--){
            rightMax[i] = max(rightMax[i+1] , goals[i+1]);
        }
        int diff = 0;
        for(int i = 0 ; i < n ; i++){
            diff = rightMax[i] - goals[i];
            if(diff > maxD)
            maxD = diff;
        }
        if(maxD != 0)
        cout << maxD <<"\n";
        else{
            cout << "UNFIT\n";
        }
    }
}