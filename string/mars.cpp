#include<iostream>
using namespace std;

int marsExploration(string s) {
    int len= s.length();
    // cout<<len;
    // int times= len/3;
    // cout<<times;
    int count=0;
    for(int i=0;i<len;i+=3){
        if(s[i]!='S') count+=1;
        if(s[i+1]!='O') count+=1;
        if(s[i+2]!='S') count+=1;
        //cout<<count<<" ";
    }
    return count;
}
int main()
{
    string s;
    cin>>s;
    cout<< marsExploration(s);
}