#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        // int notes[6]={1,2,5,10,50,100};
        // int i = 5;
        // ll sum = n, count = 0;
        // while(sum > 0 && i >=0 ){
        //     while(sum-notes[i] >= 0){
        //         count+=1;
        //         sum -= notes[i];
        //     }
        //     i--;
        // }
        // cout << count <<"\n";
        int a = n/100;
        int b = (n%100)/50;
        int c = ((n%100)%50)/10;
        int d = (((n%100)%50)%10)/5;
        int e = ((((n%100)%50)%10)%5)/2;
        int f = (((((n%100)%50)%10)%5)%2)/1;
        int sum = a + b + c + d +e +f ;
        cout << sum <<"\n";
    }
}