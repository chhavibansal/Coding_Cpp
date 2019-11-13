#include<iostream>
using namespace std;
bool checkPal(string s){
    int n=s.length();
    int i=0,j=n-1;
    do{
        if(s[i] == s[j]) i++,j--;
        else if (s[i]  != s[j]) return false;
    }while(i<=j);
    return true;
}
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        if(checkPal(s)){
            cout<<"Yes "<<s <<" is a palindrome\n";
        }
        else cout<<s<<" is not a palindrome\n";
    }
}