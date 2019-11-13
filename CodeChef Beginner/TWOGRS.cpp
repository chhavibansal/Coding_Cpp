#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const unsigned  int M = 1000000007;
bool ode(ll a, ll b, ll c){
    
        ll leftSum  =0 ;
        leftSum = ((a)%M+(2*b)%M+(3*c)%M)%M;
        cout << leftSum <<"  ";
        ll rightSum = 0;
        int flag = 0;
        for(int i = 1 ; i <= c ; i++){
            rightSum+= 3;
            leftSum-=3;
            if(rightSum == leftSum){
                return 1;
            }
            
        }
        cout << rightSum <<" " <<leftSum<<"\n";
        for(int i = 1; i <= b ; i++){
            rightSum+=2;
            leftSum-=2;
            if(leftSum == rightSum)
            return 1;
        }
         cout << rightSum <<" " <<leftSum<<"\n";
        for(int i = 1 ; i <= a; i++){
            rightSum-=1;
            leftSum-=1;
            if(leftSum == rightSum)
            return 1;

        }
        return 0;
}
int main(){
    
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t; 
    while(t--){
        ll a , b , c;
        cin >> a >> b >> c;
        if(ode(a,b,c))
        cout <<"YES\n";
        else cout <<"NO\n";
    }
}