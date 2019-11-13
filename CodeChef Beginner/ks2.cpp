
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll SOD (ll n)
{
    ll sum=0;
    while (n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main ()
{
    ll tc;
    cin>>tc;
    while (tc--)
    {
        ll n;
        cin>>n;
        cout<<n;
        ll x=SOD(n)%10;
        if (x>0)
        cout<<10-x<<endl;
        else cout<<0<<endl;

    }
return 0;

}
// #include<iostream>
// using namespace std;
// long count(int n ){
    
//         int val = 19;
//         if(n==1)
//         return val;

//         return val+9*(n-1);
// }
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n ;
//         cin >> n;
//     cout<<count(n)<<endl;
//     }
// }