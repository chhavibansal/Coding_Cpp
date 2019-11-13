#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,x , s;
        cin >> n >> x >> s;
        int box[s][2];
        for(int i = 0 ; i < s ; i++){
            cin >> box[i][0];
            cin >> box[i][1];
        }
        int latestbox = x;
        for(int i = 0 ; i < s; i++){
            if(box[i][0] == latestbox)
            latestbox = box[i][1];
            else if(box[i][1] == latestbox)
            latestbox = box[i][0];
        }
        cout << latestbox <<"\n";
    }
}