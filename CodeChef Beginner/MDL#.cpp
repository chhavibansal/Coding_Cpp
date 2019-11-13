#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int MIN = INT_MAX , MAX = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
            // if(i < 3){
                if(a[i] < MIN) MIN = a[i];
                if(a[i] > MAX) MAX = a[i];
            
            
        }
        // for(int i = 3; i < n ; i++){
        //     if(a[i] < MIN) MIN = a[i];

        // }
        int f = 1;
        for(int i= 0 ; i < n and f == 1 ; i++){
            if(a[i] == MIN){
                cout << MIN <<" "<< MAX<<"\n"; f = 0;
            }else if(a[i] == MAX){
                cout << MAX <<" "<< MIN<<"\n"; f = 0;
            }
            
        }
        
    }
}