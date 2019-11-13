#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="";
    stack<char> st;
    st.push('a');
    st.push('e');
    st.push('i');
    while(! st.empty()){
s=s+(st.top());
st.pop();
    }
    cout<<s;
// string s="a";
// s=s+"b";
// cout<<s;
}