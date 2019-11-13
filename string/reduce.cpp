#include<bits/stdc++.h>
using namespace std;
void reduce(string s){
    for(int i=1;i<s.length();i++){
        if(s[i] == s[i-1]){
            s.replace(i-1,i+1,"");
            i=1;
        }
    }
    if(s.length() == 0) {cout<<"Empty String"; return;}
   else cout<<s<<endl;
}
void anagram(string s1,string s2){
    int arr[26]={0};
    for(int i=0;i<s1.length();i++) arr[int(s1[i]) - 97]++;
    for(int i=0;i<s2.length();i++) arr[int(s2[i]) - 97]--;
    int count=0;
    for(int i=0;i<26;i++) count=count+ abs(arr[i]);
    cout<<count<<endl;
}
int main(){
    string s;
    cout<<" 1. reduce \t 2.Anagram \t \n";
    /*3. Gemstone*/
    int ch=0;
    string s1,s2; 
    cin>>ch;
    int n;
    switch(ch){
        case 1: cin>>s;
                reduce(s);
                break;
        case 2: 
                cin>>s1>>s2;
                anagram(s1,s2);
                break;
        // case 3: cin>>n;
        //         gemstone(n); break;
        default: cout<<"Enter valid choice";    
                // exit(0);
    }
     return 0;
}