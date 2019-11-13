#include"bits/stdc++.h"
using namespace std;

class Solution {
public:
    bool fact(int val ,vector<int>&primes){
        if(find(primes.begin(), primes.end(),2) != primes.end())
        // return false;
          while(val%2 == 0)
                val >>=1;
        
        for(int i= 3 ; i*i < val ; i+=2){
            if(val%i == 0){
                if(find(primes.begin() ,primes.end() , i ) == primes.end())
                    return false;
                val/=i;
            }
        }
        if(val > 2)
        if(find(primes.begin() ,primes.end() , val ) == primes.end())
            return false;
        return true;
    }
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        int count = 1 , i = 2;
        while(count != n){
            if(fact(i,primes))
                cout << i <<" " ,count++;
            if(count == n)
                return i;
            i++;
        }
        return 1;
    }
};
int main(){
    Solution s ;
    int n(15);
    vector<int> primes={3,5,7,11,19,23,29,41,43,47};
    cout << s.nthSuperUglyNumber(n , primes);
}