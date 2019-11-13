#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// bool divisibleBy20(string num) 
// { 
//     int lastTwoDigits = stoi(num.substr(num.length() - 2,  
//                             num.length() - 1)); 
  
//     return ((lastTwoDigits % 5 == 0) &&  
//             (lastTwoDigits % 4 == 0)); 
// } 
bool check(ll m , ll n){
    if( m == n)
    return true;
    if(m > n)
    return false;
    return check(m*20, n) || check(m*10, n);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
       
    //    if(divisibleBy20(to_string(n)) || );
        int money = 1;
        if(check(money , n))
        cout <<"Yes\n";
        else
        {
            cout <<"No\n";
        }
        
        
    }
}