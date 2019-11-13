#include<bits/stdc++.h> 
// #include <ctime>
using namespace std;
void print(int n){
//       time_t now = time(0);
//    char* dt = ctime(&now);
if(n==0) cout<<-1;
    if(n>=1){
        cout<<"EHLL  ";
        print(n-1);
        cout<<n<<" ";
    }
}
int main(){
    int n=10;
    print(10);
}