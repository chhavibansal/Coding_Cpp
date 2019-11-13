#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+1];
        for(int i = 0 ; i < n ; i++)
        cin >> a[i];

        int pos;
        cin >> pos;

        int val = a[pos-1];

        sort(a , a+n);

        int i = 0;
        while(a[i] != val){
            i++;
        }
        cout << i+1 <<endl;
    }
}