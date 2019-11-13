#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0 ;  i < n ; i++)
        cin >> a[i];
        int flag = 1;
        if((n&1) == 0){
            cout <<"no\n";
            flag = 0;
            continue;

        }
        if(a[0] != 1 or a[n-1] != 1){
            cout <<"no\n";
            flag = 0;
            continue;
        }
        
        int i = 0;
        for(i = 0 ; i < n/2 and flag == 1 ; i++){
            
            if(a[i]+1 == a[i+1] and flag == 1){}
            else {flag  = 0; cout <<"no\n"; }
        }
        for(; i+1 < n and flag == 1 ; i++){
            if(a[i] == (a[i+1]+1) and flag == 1)
            {}
            else{ cout << "no\n" ; flag = 0;}
        }
        if(flag == 1) cout <<"yes\n";
    }
}