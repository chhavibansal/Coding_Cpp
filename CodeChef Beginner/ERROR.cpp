#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
      string s;
      cin>> s;
      string g1 = "101", g2= "010";
      if(s.find(g1) != std::string::npos || s.find(g2) != std::string::npos)
      cout << "Good"<<endl;
      else
      {
         cout << "Bad"<<endl;
      } 
      
    }
}
