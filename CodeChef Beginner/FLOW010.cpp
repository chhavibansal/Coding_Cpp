#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    string str = "aeiou";

    while(t--){
        int n ;
        cin >> n;
        int count = 0;
        string s;
        cin >> s;
        int i = 0;
        while(i+1 < n ){
            if((str.find(s[i]) == string::npos) and (str.find(s[i+1]) != string::npos))
            count+=1;
            i+=1;
        }
        cout << count <<"\n";

    }
}