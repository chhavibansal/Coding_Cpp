#include<bits/stdc++.h>
using namespace std;
string isValid(string s) {
   int i,n=s.length();
    map<char ,int > mp;
    int count=2;
    for(int x: s) mp[x]++;
  while(i<n){
            i=i+mp[s[i]]-1;
    
            if(mp[s[i]] != mp[s[i-1]])  {
                count--; 
            if(count==0){ return "NO";} 
            }
    }
    return "YES";
}
 int main(){
     string s;
     cin>>s;
    // string val= 
   cout<< isValid(s);
    // cout<<val;
 }