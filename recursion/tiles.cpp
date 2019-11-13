#include<iostream>
using namespace std;
int ways(int c){
    if(c == 1 || c == 4) return 2;
    return ( ways(c-1) + ways(c-4));
}
int main(){
    int n;
    cin>>n;
    cout<< ways(n);
}