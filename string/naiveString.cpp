#include<iostream>
#include<string.h>
using namespace std;
void naive(char *txt,char *pt,int m,int n){
     int i,j;
     for(i=0;i<=m-n;i++){
        for(j=0;j<n;j++){
            if(pt[j]==txt[i+j]) {
                if(j==n-1) cout<<"Found at "<<i<<endl;
                continue;}
            else break;
        }
    }
}
void swap(int &a,int & b){
    int temp=a;
    a=b;
    b=temp;
}
void rev(int &a,int &b){
    int rev=0;
    while(a>0){
        rev=rev*10+ (a%10);
        a=a/10;
    }
    a=rev;
     rev=0;
    while(b>0){
        rev=rev*10+ (b%10);
        b=b/10;
    }
    b=rev;
    
}
int main(){
    char txt[100],pt[10];
    // cin>>txt;
    // cin>>pt;
    int i,j;
    int m=strlen(txt);
    int n=strlen(pt);
//    naive(txt,pt,m,n);
int a=1234,b=67890; 

    rev(a,b);
    cout<<a<<"  "<<b<<endl;
    swap(a,b);
    cout<<a<<" " <<b<<endl;
}