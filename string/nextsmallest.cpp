#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
void swap(char *a,char *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}

int main()
 {  
    int t; 
    cin>>t;
    while(t--){
        char num[1000000];
        cin>>num;
        int len=strlen(num);
        cout<<len;
        nextsmallest(num,len);
    }
    
}