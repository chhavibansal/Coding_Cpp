#include<iostream>
#include<bitset>
#include<limits.h>
using namespace std;
int main(){
    int n;
cin>>n;
bitset<8> bs(n);
cout<<bs<<endl;
string s=bitset<32>(n).to_string();
cout<<s;
// for(int i=0;i<32;i+=2)
// {
// std::swap(s[31-i],s[30-i]);
// }
 int i,count=1,max=INT_MIN;
     for(i=30;i>=0;i--){
         if(s.at(i) == s.at(i+1)  && s.at(i)=='1'){
             count++;
             if(count>max) max=count;
         }
     }
     cout<<max;
// long long int a=bitset<32>(s).to_ullong();
    // string s;
    //  cin>>s;
    //  int count=0,i=0;
    //  for(i=0;i<s.length()-1;i++){
    //      if(s.at(i)==s.at(i+1)  && s.at(i)=='1'){
    //          count++;
    //      }
    //  }
    //  cout<<count;
}