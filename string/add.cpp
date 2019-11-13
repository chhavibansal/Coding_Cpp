#include<iostream>
#include<vector>
using namespace std;
// https://practice.geeksforgeeks.org/problems/column-name-from-a-given-column-number/0/?ref=self
string calcCol(unsigned long long num){
    const vector<string> alpha= {
       "XXX", "A","B","C","D","E","F", "G", "H", "I", "J","K", "L","M" ,
        "N", "O","P","Q","R", "S", "T" ,"U", "V","W","X","Y" ,"Z"
    };
    if(num<=26)
    return alpha[num];
    string res="",nxt="",s="";
    while(num>= 1){
         unsigned long long val=num;
        num=num/26;  
        int rem=val%26;
        if(rem==0 ){ nxt="Z"; s=calcCol(num-1);}
         else{
             nxt=calcCol(rem);
             s=calcCol(num);
         }
         res=nxt+res;
    
    }
    
    return res;
}
string codediff(int num){
    {
    const vector<string> alpha= 
       {" ", "A","B","C","D","E","F", "G", "H", "I", "J","K", "L","M" ,
        "N", "O","P","Q","R", "S", "T" ,"U", "V","W","X","Y" ,"Z"
    };string nxt="";
    if(num<=26)
    return alpha[num];
    
    else { int val=num;
        num=num/26;  //cout<<num;
        string s=calcCol(num);
        int rem=val%26;
        if(rem==0){ nxt="Z";}
        else
        { nxt=calcCol(rem);}
        return (s+nxt);
    }
}
}
int main()
 {  
    int t; 
    cin>>t;
    while(t--){
        unsigned long long  num;
        cin>> num;
        // string res="";
        // string s=calcCol(num);
        // res=res+s;
        string s= codediff(num);
        cout<<s;
    }
    
}