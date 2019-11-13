#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll m , p;
        cin >> m >> p;
        vector<ll> vec;
        ll x;
        ll sum = 0;
        for(ll i = 0; i < m ; i++){
            cin >> x;
            vec.push_back(x);
            sum+=x;
        }
        if( sum < p){
            cout << "-1" << endl;
            break;
        }
        
        sort(vec.begin(), vec.end());
        int count = 0;
        ll now = 0;
        for(int i = m-1; i>= 0 &&  now < p ; i--){
            now+= vec[i];
            count+=1;
        }
        cout << count << endl;
        
    }
}