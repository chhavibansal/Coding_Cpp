#include <bits/stdc++.h>
using namespace std;
int char_int(char val){
    int act_val=int(val)-96;
const vector<int> v={
    INT_MIN,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
    return v[act_val];
}
// Complete the weightedUniformStrings function below.
vector<string> weightedUniformStrings(string s, vector<int> queries) {
    set<int> st;
    map<char,int> mp;
    for(int x:s) mp[x]++;

   int i=0;
    while(i<s.length()){
        int val=char_int(s[i]);
        int count=mp[s[i]];
        i=i+count;
        while(count>0){
            st.insert(val*count);
            count--;
        }
       
    }
    vector<string> ans;
    for(i=0;i<queries.size();i++){
        auto it=st.find(queries[i]);
        if(it != st.end()) ans.push_back("Yes");
        else ans.push_back("No");
    }
    return ans;

}
int main(){
    string s; cin>>s;
    int num;
    int n; 
    cin>> n;
    vector<int> v;
    for(int i=0;  i<n ;i++) cin>>num, v.push_back(num);
    vector<string> ans=weightedUniformStrings(s,v);
    for(auto it=ans.begin(); it!= ans.end() ;it++){
        cout<< *it<<"\n";
    }
}