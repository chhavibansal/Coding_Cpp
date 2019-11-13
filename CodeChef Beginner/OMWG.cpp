#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
       int n , m;
       cin >> n >> m;
       int dia = n+m;
       
       int oth = (n*m)-dia;
       if(n == m)  oth +=1;
       int cost = (dia-2)*1 + oth*2;
       cout << cost << "\n";
    }
}