
#include<iostream>
#include<vector>
using namespace std;
    string s="";
string getv(int i){
    vector<string> vs{"zero","one","two","three","four","five"
    ,"six","seven","eight","nine"};
    return vs[i];
}
void print(int n){
    if(n==0) return;
    // s= getv(n%10)+s+" ";
    print(n/10);    
    cout<< getv(n%10);
}
int main(){
    int n; cin>>n;
    print(n);
    cout<<s;
}