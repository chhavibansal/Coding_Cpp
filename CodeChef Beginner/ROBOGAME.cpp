#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        
        string s;
        cin >> s;
        int len = 0;
        vector<pair<int,int>>vec;
        int n =s.size();
        int l = 0 , r = 0;
        for(int i = 0 ; i < n ; i++){
            if(s[i] == '.'){
                
            }else{
                int k = s[i]-'0';
                l = max(0, i-k);
                r = min(i+k, n-1);
                vec.push_back(make_pair(l,r));
            }
        }
        int f = 0;
        if(vec.size() == 0 or vec.size() == 1){
            // cout << "safe\n";
            f = 1;
        }
        else{
            int MAX = vec[0].second;
            for(int i = 1 ; i < vec.size() ; i++){
                if(vec[i].first <= vec[i-1].second){
                    cout <<"unsafe\n";
                    f = 0;
                    break;
                }
                else{
                    f = 1;
                }
            }
        }
        if(f == 1)
        cout <<"safe\n";
    }
}