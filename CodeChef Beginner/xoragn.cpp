#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0 ; i < n ; i++)  cin >> a[i];
        int res = 0;
       for(int i = 0 ; i < n ; i++)
       res^=a[i];
    cout << 2*res << endl;
    }
}