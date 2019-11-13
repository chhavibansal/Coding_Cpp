#include<iostream>
using namespace std;
int checkPal(string s){
    int n=s.length();
    int i=0,j=n-1;
   int res=0;
    do{
        if(s[i] == s[j]) i++,j--;
        else if (s[i]  != s[j]) {
            int val=abs(int(s[i]) -abs(s[j]));
            res=res+val;
            i++,j--;
        }
    }while(i<=j);
    // return true;
    cout<<res<<"\n";
}
int delPal(string s){
    int n=s.length();
    int i=0,j=n-1;
    while(i<j){
        if(s[i] == s[j]) i++,j--;
        else if( s[i] != s[j]){
            if(s[i+1] == s[j])  return i;
            else return j;
        }
    }
    return -1;
}
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
    //    checkPal(s);
    int val=delPal(s);
    cout<<val<<endl;
    }
}
