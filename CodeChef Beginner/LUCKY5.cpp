#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int i = 0;
        int count = 0;
        while(s[i] != '\0'){
            int val =s[i]-'0';
            if(val == 7 || val == 4){
                i++; continue;
            }else count++;
            i++;
              
        }
        cout << count << endl;
    }
}