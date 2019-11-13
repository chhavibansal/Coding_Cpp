#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    const unsigned  int M = 1000000007;
    int nthUglyNumber(int n, int a, int b, int c) {
         int k[n+1];
        int  x = 1 , y = 1 , z = 1;
        k[0] = 1;
        for(long long int i = 1 ; i <= n ; i++){
            k[i] =  min((x*a)%M , min((y*b)%M , (z*c)%M));
            if((k[i]%a ) == 0) x+=1;
            if((k[i]%b ) == 0) y+=1;
            if((k[i]%c ) == 0) z+=1;
        }
        // for(int x : k)
        //     cout <<  x <<" ";
        return k[n];
    }
};
int main(){
    Solution s;
    cout << s.nthUglyNumber(3,2,3,5);

}