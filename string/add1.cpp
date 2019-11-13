#include<iostream>
#include<vector>
using namespace std;
string calcCol(int num){
    const vector<string> alpha= 
       {" ", "A","B","C","D","E","F", "G", "H", "I", "J","K", "L","M" ,
        "N", "O","P","Q","R", "S", "T" ,"U", "V","W","X","Y" ,"Z"
    };string nxt="";
    if(num<=26)
    return alpha[num];
    
    else { int val=num;
        num=num/26;  //cout<<num;
        string s="";
        int rem=val%26;
        if(rem==0){ 
            s=calcCol(num-1);
            nxt="Z";}
        else
        { nxt=calcCol(rem);
            s=calcCol(num);
        }
        return (s+nxt);
    }
}
int main()
 {  
    int t; 
    cin>>t;
    while(t--){
        int num;
        cin>> num;
        // string res="";
        string s=calcCol(num);
        // res=res+s;
        cout<<s<<endl;
    }
    
}