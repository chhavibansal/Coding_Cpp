#include<iostream>
#include<algorithm>
using namespace std;
bool issorted(int *a ,int n){
    for(int i = 1 ; i < n ; i++){
        if(a[i]+1 != a[i+1])
        return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        int a[n+1];
        int b[n+1];
        for(int i = 1 ; i <= n ; i++)
        {
            cin >> a[i]; 
            b[i] = a[i];
        }
        sort(b+1,b+n+1);
        int i ,f = -1;
        for(i = 1 ; i <= n ; i++){
            // out of range element
            if(a[i] > n ){
                f = 0; // false not valid
                break;
            }else if(b[a[i]] < 0){
                // already value exisit
                f = 0; break;
            }
            b[a[i]] = -1*b[a[i]];
        }
        // if() 
        if( f == 0 or issorted(a,n)){
            cout << "no\n";
        }else cout <<"yes\n";
    }
}