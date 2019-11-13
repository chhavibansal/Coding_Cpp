#include<iostream>
using namespace std;
bool check(char a[3][3]){
    for(int i = 0 ; i < 2; i++){
        for(int j = 0 ; j < 2; j++){
            if(a[i][j] == 'l' && a[i+1][j] == 'l' && a[i+1][j+1] =='l'){
                return true;
            }
        }       
    }
    return false;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        char a[3][3];
        for(int i = 0 ; i < 3; i++)
        for(int j  = 0 ; j < 3; j++)
        cin >> a[i][j];

        if(check(a))
        cout <<"yes\n";
        else cout << "no\n";
    }
}