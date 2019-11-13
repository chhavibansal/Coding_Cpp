#include<bits/stdc++.h>
using namespace std;
void repeatedSubstringPattern(string s) {
        set<char> st;
        int i;
        for(i=0;i<s.length();i++)
        st.insert(s[i]);
        // for
        int size=st.size();
        cout<<size;
        int arr[26]={0};
        for(i=0;i<s.length();i++){
            arr[s[i]-'a']++; int k=i;
            if((k+1)%size == 0 && k>size){
                for(int j=0;j<size-1;j++){
                    cout<<k<<" ";
                    if(arr[s[j]-'a'] != arr[s[j+1]-'a']) {cout<<"-1" ;break;}
                }
            }
        }
        // return true;
        cout<<"true";
    }
   
int main(){
    string s;
     cin>>s;
    // cout<<
    // repeatedSubstringPattern(s);
}

/*
set<char> st;
        int i;
        for(i=0;i<s.length();i++)
        st.insert(s[i]);
        int size=st.size();
        int arr[26]={0};
        for(i=0;i<s.length();i++){
            arr[s[i]-'a']++;AppleEEFEIFHIOGHHGOIEeafeaoghea

            int k=i;
            if((k+1)%size == 0 &&  k>size){
                for(int j=0;j<size-1;j++){
                    if(arr[s[j]-'a'] != arr[s[j+1]-'a']) return false;
                }
            }
        }
        return true;
        */