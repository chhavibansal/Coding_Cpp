#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[]="I am chhavi bansal";
    char* ptr;
    ptr= strtok(s," ");
    while( ptr != NULL){
        cout<<ptr<<" ";
        ptr=strtok(NULL," ");
    }
    
}