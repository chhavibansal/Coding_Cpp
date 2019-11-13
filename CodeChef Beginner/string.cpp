#include"bits/stdc++.h"
using namespace std;
vector<string> vec;
void fn1(int len , int from,  string x){
    string nxt ;
    string s = vec[from-1];
    vec.push_back(s.substr(0,len-1)+x);
}
void fn2(int len , int from){
    string s;
    string x = vec[from-1];
    vec.push_back(x.substr(0,len));
}
bool fn3(int l , int r , string s){
    for(int i = l-1 ;i < r ; i++ ){
        string present = vec[i];
        auto res= std::mismatch(s.begin(),s.end(), present.begin());
        if(res.first == s.end())
        return true;
    }
    return false;
    
}
int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    // vector<string> vec;
    vec.push_back(s);
    int q;
    cin >> q;
    int a , b ,which;
    string c;
    for(int i = 0 ; i< q ; i++){
        cin >> which;
        if(which == 1){
            cin >> a >> b >> c;
            fn1(a ,b,c);
            
        }else if(which == 2){
            cin >> a >> b;
            fn2(a,b);
            
        }else{
            cin >> a >> b >> c;
            int val = fn3(a,b,c);
            val == 0?cout <<"no\n":cout <<"yes\n";
        }
        
    }
    for(auto x : vec)
        cout << x << " ";
}