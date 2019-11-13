#include<bits/stdc++.h>
using namespace std;
int minFn(string a, string b){
    int count = 0 ;
    int n = a.length();
    for(int i = 0 ;i < n ; i++){
        if(a[i] != b[i]){
            if(a[i] == '?' && b[i] not_eq '?') {}
            else if(a[i] not_eq '?' && b[i] == '?') {}
            else count++;
        }
        // count++;
    }
    return count;
}
int maxFn(string a ,string b){
    int count = 0;
    for(int i = 0 ; i < a.length() ; i++){
        if(a[i] != b[i] or (a[i] == '?' and b[i] == '?'))
        count++;
    }
    return count;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s1 , s2;
        cin >> s1 >> s2;
        int v = minFn(s1,s2);
        int j = maxFn(s1 , s2);
        cout << v << " "<<  j << endl;
    }
}