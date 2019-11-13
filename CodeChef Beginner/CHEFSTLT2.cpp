#include<iostream>
using namespace std;
#define fo(i, n) for(i = 0 ; i < n ; i++)
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int i = 0;
        fo(i,n)
        cin >> a[i];
        int f(0);
        int one = 0, zero(0);
        for(int i = 0 ; i< n ; i++){
            if(a[i] == 1)
            one+=1;
            else
            {
                zero+=1;
            }
            if(one < zero){
                f = 1;
                cout << "Invalid\n";
                break;
            }
        }
        if(f == 0)
        cout<<"Valid\n";
    }
}