#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k ;
        cin >> n >> k ;
        int a[n];
        int sum = 0;
        for(int i = 0 ; i < n ; i++)
        cin >>  a[i] , sum+= a[i];

        sort(a , a+n);
        int child = 0;
        for(int i= 0 ;i < k ; i++)
        child+= a[i];
        cout << sum- 2*child << endl;
    }
}