#include<bits/stdc++.h>
using namespace std;
void evaluate(string s){
    stack<int> s_stack; //operand stack
    int i=0;
    while(i<s.length()){
        if(s[i]>='0' && s[i]<='9')  s_stack.push(s[i]);
        else 
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<int > s1;
        int n=s1.length();
        for(int i=0;i<n;i++){
            if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
                int op2=s1.top(); s1.pop();
                int op1=s1.top(), s1.pop();
                int res= evaluate(s[i],op1,op2);
                s1.push(res);
            }
            else{
                s1.push(s[i]-'0');
            }
            
        }
    }
}