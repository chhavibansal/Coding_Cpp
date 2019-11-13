#include<bits/stdc++.h>
void printstack(stack<int> st){
    int len=st.size()/2;
    int n=0;
    if(n<len) {
        
        printstack(st);
        cout<<st.top()<<" "; st.pop(); 
    }
    

}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        stack<int> st;
        int num;
        for(i=0;i<n;i++) cin>>num; st.push_back(num);
        printstack(st);
    }
}