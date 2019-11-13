#include<bits/stdc++.h>
using namespace std;
string balance(string s){
        stack<char> k;
    int i=0;
    for(i=0;i<s.length();i++){
        if(s[i]=='{' || s[i]=='[' || s[i]=='(') {k.push(s[i]);continue;}
        if(k.empty()) return "NO";
        else if((s[i]=='}' && k.top()=='{') || (s[i]==')'  && k.top()=='(') ||
        (s[i]==']' && k.top()=='['))    k.pop();
        else if( (s[i]==']' || s[i]==')' || s[i]=='}')) return "NO";

    }
    if(!k.empty()) return "NO";
    else return "YES";
    

}

int main(){
    int t;
    cin >>t;
    while(t--){
        string s; cin>>s;
        cout<<balance(s)<<endl;    
    }
}