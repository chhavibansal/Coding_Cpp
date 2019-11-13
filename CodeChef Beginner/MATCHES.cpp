#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int count[10] ={6,2,5,5,4,5,6,3,7,6};
    int t;
    cin >> t;
    while(t--){
        ll a , b;
        cin >> a >> b;
        ll  sum = a+b;
        int c = 0;
        while( sum > 0 ){
            int num = sum%10;
            c+=count[num];
            sum/=10;
        }
        cout << c <<"\n";
    }
}