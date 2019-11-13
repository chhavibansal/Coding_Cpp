#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a[n][2];
        unordered_map<string,int> st;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < 2; j++){
            cin >> a[i][j];
            if(j == 0)
            st[a[i][0]] +=1;}
        }
        for(int i = 0 ; i < n ; i++){
            if(st[a[i][0]]  > 1)
            cout << a[i][0] <<" " <<a[i][1]<<"\n";
            else cout << a[i][0]<<"\n";
        }
    }
}