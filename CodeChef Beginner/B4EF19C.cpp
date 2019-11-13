#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    std::cin.ignore();
    while(t--){
        string str;
        getline(cin , str); 
        // cin >> str;
        ll q;
        cin >> q;
        map<string,ll> mp;
        string word;
        string most;
ll MAX = 0;
        for(auto x : str){
            if( x== ' ' ){
                mp[word]+=1;
                if(mp[word] > MAX){
                    most = word;
                    MAX = mp[word];
                }
                word="";
            }else{
                word+=x;
            }
            
        }
        mp[word]+=1;
        if(mp[word] > MAX){
            most = word;
            MAX = mp[word];
        }
        string x;
        ll sum = 0;
        for(auto it = mp.begin() ; it != mp.end() ; it++){
            sum+= ((it->first.size())* it->second);
        }
        while(q--){
            ll a;
            string s;
            cin >> a;
            if(a == 1){
                cin >> s;
                mp[s]+=1;
                sum += (s.size());
                if(mp[s] > MAX){
                    most = word;
                    MAX = mp[s];
                }
            }else if(a == 2){
            
                cout << most <<"\n";
            }else if(a == 3){
                cout << sum << "\n";
            }else{}
        }
    }   
    return 0;
}