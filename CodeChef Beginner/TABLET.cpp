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
        int a[n][k];
        int MAX = -1;

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < 3 ; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < 3; j++){
                if(a[i][2] <= k){
                    if(MAX < (a[i][0]*a[i][1]))
                    MAX  = a[i][0]* a[i][1];
                }
            }
        }
        (MAX > 0) ? cout << MAX : cout <<"no tablet";
        cout << "\n";
    }
}