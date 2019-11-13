#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n ; i++)
        cin >> a[i];


// 10 1 100
// 100/10 = 10 (atmost 10 logo ne solve kia )  --> tough
// 100/2 = 50 (atleast 50 ne solve ) --> easy
        int count_h = 0 ; int count_e = 0;
        int tenth = k/10, half = k/2;
        // cout << tenth << "  "<< half;
        for(int i = 0 ; i < n ; i++){
            if(a[i] <= tenth)
                count_h +=1;
            if(a[i] >=  half)
                count_e +=1;
        }
        // cout << count_h << " " << count_e<<"\n"; 
        if(count_h == 2 and count_e == 1)
        cout << "yes\n";
        else cout <<"no\n";
    }
}