#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        string comp, temp , right;
        int len = 1, f = 0, start ;
        while( len  <= n  ){
            
            // first substring which i consider it to be the compressor string 
            temp = s.substr(0 , len);
            int times =  ( n-len)/len;
            f = 1; //assume it to be the compressor string  
            start = len;
            while(times--){
                right = s.substr(start , len);
                if(temp != right){
                    //assumtion is false
                    f = 0 ; break;
                }
                start+=len;                
            }
            if(f == 1 and  start >= n ){
                
                //yes we have found the compressor string
                cout << temp<<"\n";
                break;
            }
            len+=1;
            
        }
    }
    return 0;
}
