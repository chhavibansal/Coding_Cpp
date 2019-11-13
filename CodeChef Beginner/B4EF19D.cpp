#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n , q;
        cin >> n>>q;
        string s;
        cin >> s;
        while(q--){
            int a , b ,c;
            cin >> a >> b >> c;
                int e = 0 , o = 0;
                // addition if o is odd then O 
                for(int i = b; i <= c ; i++){
                    if(s[i-1] == 'O')
                    o+=1;
                    else e+=1;
                }
            

            if(a == 1){
                if(o%2 == 1)
                cout << "O";
                else 
                cout <<"E";
            }else{
                if(e >= 1)
                cout << "E";
                else 
                cout <<"O";
            }
            cout << "\n";
        }

    }
}
