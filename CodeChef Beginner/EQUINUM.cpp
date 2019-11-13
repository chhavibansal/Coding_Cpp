#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int freq[26]={0};
        for(int i = 0 ; i < s.size() ; i++)
        freq[s[i]-'a']+=1;
        int sum = 0;
        int MAX = 0;
        for(int i = 0 ; i < 26; i++){
            sum+= freq[i];
            if(freq[i] > MAX)
            MAX = freq[i];
        }
        sum-= MAX;
        if(sum == MAX){
            cout <<"YES\n";

        }else cout <<"NO\n";
    }
}