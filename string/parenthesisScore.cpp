#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int go(int lo,int hi){
    if(lo+1 == hi) return 1;
    int mid=v[lo];
    if(mid == hi) return 2*go(lo+1,hi-1);
    return go(lo,mid)+go(mid+1,hi);
}
int scoreOfParenthesis(string s , int len){
    stack<int> st;
    v.resize(len,0);
    for(int i=0;i<len;i++){
        if(s[i]==')'){
            int t=st.top();
            v[t]=i;
            st.pop();
        }
        else st.push(i);
    }
    return go(0,len-1);
}
int main(){
    string s;
     cin>>s;
      int len=s.length();
     cout<< scoreOfParenthesis(s,len);
}