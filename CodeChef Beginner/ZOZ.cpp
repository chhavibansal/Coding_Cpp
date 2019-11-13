#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin >> t;
    while(t--){
       int n;
       ll k;
       cin >> n >> k;
       int a[n];
       for(int i =0; i < n; i++)
       cin >> a[i];
       int sum[n]={0};
       int temp = 0;
       for(int i= 0 ;i < n; i++ )
       sum[i]+=temp , temp+=a[i];

       temp= 0;
       for(int i = n-1 ; i>=0 ; i--)
       sum[i]+=temp , temp+=a[i];

       int count = 0;
       for(int i = 0 ; i < n ; i++){
           if(a[i]+k > sum[i])
           count+=1;
       }
       cout << count << endl;
    }
}