#include <bits/stdc++.h>

using namespace std;

// Complete the anagram function below.
void anagram(string s) {
int n=s.length();
    if(n %2 != 0) {cout<<"-1";return ;}
    string s1=s.substr(0,(n/2));
    string s2=s.substr(n/2,n-1);
    cout<<s1<<"  "<<s2;
    int arr[26]={0};
    int count=0;
    for(int i=0;i< s1.length();i++) arr[s1.at(i)-97]++;
    for(int x:arr)cout<<x;
    for(int i=0;i<s2.length() ;i++) arr[s2.at(i)-97]--;
    for(int i=0;i<26;i++) if(arr[i] >= 1) count=count+arr[i];
    cout<<"    "<<count;
    // return count;
}
string gameOfThrones(string s) {
    int arr[26]={0};
    for(int i=0;i<s.length();i++) arr[s.at(i)-97]++;
    int count=2;
    for(int i=0;i<26;i++){
        if(count ==0 ) break;
        if(arr[i] % 2 != 0) {count--; cout<<count<<"  ";}
        else if(arr[i] %2 ==0) arr[i]=0;
    }
    if(count==0n) cout<< "NO";
    // return "YES";
    cout<<"YEs"

int main(){
    string s; cin>>s;
// for(int i=0;i<s.length();i++){
//     int j= s[i]-'\0';
//     cout<<j<<" ";
// }
// anagram(s);
gameOfThrones(s);
    // cout<<val;
    // for(int i=1;i<s.length();i++){
    //     if(s[i] == s[i-1] ) s.erase(i-1,i+1),i=0;
    // }
    // if(s.length()==0) cout<<"Empty String";
    // else
    // cout<<s;
}