#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum = n*n;
        for(int i = 2 ; i < n ; i+=2){
            sum+= ((n-i)*(n-i));
        }
        cout << sum << endl;
    }
}