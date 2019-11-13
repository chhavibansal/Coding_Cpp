#include"bits/stdc++.h"
using namespace std;
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int count[256]={0};
        for(int i = 0 ; i < text.size() ; i++){
            count[text[i]]+=1;
        }
        int time = 0;
        string x = "balloon";
        int minv = INT_MAX;
        int flag = 0;
        for(int i = 0 ; i < x.size() ; i++){
            if(x[i] == 'l' or x[i] == 'o'){
                cout << count[x[i]]/2 <<" ";
                minv = min(count[x[i]]/2,minv);
                flag = 1;
            }else {
                
                minv = min(count[x[i]] , minv);
                flag = 1;
            }
        }
        if(flag == 1)
        return minv;
        
        return 0;
    }
     string reverseParentheses(string s) {
        stack<char> st;
        string alt;
        string a;
        int flag = 1;
        int i = 0;
        for(i = 0 ; i < s.size() ; i++){
            char x = s[i];
            
            if(x == ')'){
                string z ;        
                while(st.top() != '('){
                z= z+st.top();
                    st.pop();
                }
                cout << z;
                
                st.pop();
                if(st.empty())
                    return z;
                for(char y : z)
                    st.push(y);
                // st.push(z);
                
            }
            else{
                st.push(x);
            }
        }
        return a;
    }
};
int main(){
    string s;
    cin >> s;
    Solution sn;
    // cout << sn.maxNumberOfBalloons(s);
    cout << sn.reverseParentheses(s);
}