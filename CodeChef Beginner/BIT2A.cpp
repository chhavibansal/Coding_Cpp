#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main(){
   
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[n];
        for(int i = 0 ; i < n; i++)
        cin >> a[i];

        int b[n]={0};
        int i = 0 , k = 0;
        while(i < n ){
           
            if((i+1 < n) and a[i] != a[i+1])
            b[k++] = n-i-1;
            else{
                int s = i;
                while((i+1< n ) and a[i] == a[i+1]){ 
                    i+=1;
                }
                while(s <= i){
                    b[k++] = n-i-1; 
                    s+=1;
                }
            }
            i+=1;
        }
        for(int x : b)
        cout << x <<" ";
        cout << "\n";
    }
}