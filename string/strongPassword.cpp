#include<bits/stdc++.h>
using namespace std;
// void minimumNumber( string p) {
//     // Return the minimum number of characters to make the password strong
//     int flag=0;
//     for(int i=0;i<p.length();i++){
//         if((p[i]<=9 || p[i]>=0) && (int(p[i])<=122 || int(p[i])>=97) && 
//           (int(p[i])<=90 || int(p[i])>=65) && 
//           ((int(p[i])<=38 || int(p[i])>=35) || ((int(p[i])<=43 || int(p[i])>=40)) || 
//           int(p[i])==33 ||int(p[i])==45 ||int(p[i])==94 ||int(p[i])==64) )
//           flag=1, cout<<flag<<" ";
//           else flag=0,cout<<flag<<" ";
//     }
//     if(flag) cout<<"Strong"<<endl;
//     else cout<<" Weak";
// }
int CharFamily(char c) 
{
   if(c >= '0' && c <= '9') return 0;
   if(c >= 'a' && c <= 'z') return 1;
   if(c >= 'A' && c <= 'Z') return 2;
   return 3;
}

int main() 
{
    int n; cin >> n;
    char c;
    bitset<4> mask;

    while (cin >> c)
    {
        mask.set(CharFamily(c));
    }
    cout << max(6-n, 4-(int)mask.count());
}
// int main(){
//     string s;
//      cin>>s;
//     minimumNumber(s);
// }