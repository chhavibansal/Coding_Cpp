#include<iostream>
using namespace std;
string caesarCipher(string s, int kdash) {
    int k=kdash%26;
    for(int i=0;i<s.length();i++){
        int val=(int (s[i])+k);
        if(int(s[i])>=97 && int(s[i])<=122){
            if(val > 122)
            s[i]=char((val%122)+96);
            else s[i]=char(val);
        }
        else if(int(s[i])>=65 && int(s[i])<=90){
           if(val > 90)
           s[i]=char((val%90)+65);
           else s[i]=char(val);
        }
        else
        s[i]=s[i];
    }
    return s;
}
void marsExploration(string s) {
    int len= s.length();
    cout<<len;
    int times= len/3;
    cout<<times;
    int count=0;
    for(int i=0;i<len;i+=3){
        if(s[i]!='S') count+=1;
        if(s[i+1]!='O') count+=1;
        if(s[i+2]!='S') count+=1;
        cout<<count<<" ";
    }
    cout<<endl;
cout<< count;
}
int main(){
    int n,k;
    // cin>>n;
     string s;
    //  cin>>s>>k;
    cin>>s;
//   cout<<
    marsExploration(s);
    // cout<<caesarCipher(s,k);    
    }