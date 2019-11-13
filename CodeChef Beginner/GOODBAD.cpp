#include"bits/stdc++.h"
using namespace std;
int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int len , flip;
        cin >> len >> flip;
        string s;
        cin >> s;
        int upper = 0 , lower = 0;
        for(int i = 0; i < s.size() ; i++){
            if(isupper(s[i]))
            upper+=1;
            else 
            lower+=1;
        }
        if(lower <= flip and upper <= flip ) cout <<"both\n";
        else if(upper == len or lower <= flip) cout <<"brother\n";
        else if(lower == len or upper <= flip) cout <<"chef\n";
        
        else{
cout <<"none\n";
        }
        
    }
}