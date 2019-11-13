#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string a , b;
        cin >> a >> b;
        string z;
        for(int i = 0; i < a.size() ; i++){
            if((a[i]=='W' and b[i] =='W') or ( a[i] != b[i]))
            z+='B';
            else z+='W';
        }
        
        for(char  c : z)
        cout << c;
        cout <<"\n";
    }
}