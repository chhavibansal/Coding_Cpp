#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    string a[]={"4LB","5MB","6UB","1LB","2MB","3UB","8SU","7SL"};

    while(t--){
        int n;
        cin >> n;
        int k  = n/8;
        n = n%8;
        string ans;
        if(n == 0){ 
            ans = a[7];
        }
        else ans = a[n-1];
        
        int digit = ans[0]-'0';
        digit = digit + (k == 0 ? 0 : k+7);
        cout << digit;
        string c ;
        // c=( digit+'0');
        for(int i = 1 ; i < 3 ; i++)
        c+=ans[i];
        cout << c <<"\n";

    }
}