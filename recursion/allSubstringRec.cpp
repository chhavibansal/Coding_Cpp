#include<iostream>
using namespace std;
void substr(char* in , char * out, int i ,int j){
    if( in[i] == '\0'){
        out[j]='\0';
        cout<<out<<", ";
        return ;
    }
    out[j]= in[i];
    substr(in , out, i+1, j+1);
    substr(in , out , i+1, j);
}
int main(){
    char in[100];
    char out[100];
    cin>>in;
    substr(in,out,0,0);
}