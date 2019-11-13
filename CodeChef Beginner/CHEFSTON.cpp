#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin >> t;
    while(t--){
       ll n , k;
       cin >> n >> k;
       ll time[n] , profit[n];
       for(int i = 0; i < n; i++)
       cin >> time[i];

       for(int i = 0 ;i < n ; i++)
       cin >> profit[i];

       ll times ;
       ll maxProfit = 0 , prof = 0;
       for(int i = 0 ; i < n ; i++){
           times = k/time[i];
           prof = profit[i]*times;
           maxProfit = max(maxProfit , prof);
       }
       cout << maxProfit <<" ";
    }
}