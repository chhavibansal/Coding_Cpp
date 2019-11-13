#include"bits/stdc++.h" 
using namespace std;
void rev(string s){
    string ans;
    char* tok = strtok(s , ".");
    while(tok != NULL){

        ans = tok+ans;
        tok = strtok(NULL , ".");
        ans+=".";
    }
    cout << ans;
}
int main(){
    string s;
    cin >> s;
    rev(s);
}