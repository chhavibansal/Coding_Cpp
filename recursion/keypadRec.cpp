#include<iostream>
#include<cstring>
using namespace std;
// char mapping(int num)
char keypad[][10] ={"", "","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void phone( char *in , char* out, int i, int j){
    if( in[i] == '\0'){
        out[j]='\0';
        cout<<out<<" ,";
        return;
    }
    //recursion
    int digit=in[i]-'0';
    if( digit == 0 || digit==1)
    phone(in , out, i+1,j); //skip 
    for(int k=0 ; keypad[digit][k]!='\0' ;k++){
        out[j]= keypad[digit][k];
        phone(in,out,i+1,j+1);
    }

}
int main(){
    char in[10];
    cin>> in;
    char out[10];
    phone(in,out,0,0);
}