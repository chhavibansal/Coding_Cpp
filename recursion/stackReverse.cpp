#include<iostream>
#include<stack>
using namespace std;
stack<int> s2;
void reverse(stack<int>& s1){
    if( s1.empty()) return;
        int val = s1.top();
        s1.pop();
        s2.push(val);
    //  cout<<"no/";
        reverse(s1);
        // cout<<val<<" "; 
        // s1.push(val);
}
int main(){
    stack<int> s1;
    for(int i = 0  ; i < 6 ; i++){
        s1.push(i);
    }
    // while(!s1.empty()){
    //     cout << s1.top()<<" ";
    //     s1.pop();
    // }
cout<<endl;    
    reverse(s1);
    while(!s2.empty()){
        cout << s2.top()<<" ";
        s2.pop();
    }
}