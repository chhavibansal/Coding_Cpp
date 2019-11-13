#include"bits/stdc++.h"
using namespace std;

vector<int> ar(10);
int toArray(int n ){
    int x = n;
    int i = 0, c= 0 ;

    while(x > 0 ){
        ar[i++] = x%10; x/=10;
        c++;
    }
    for(auto x : ar) cout << x <<" ";
    cout << endl;
    return c;
}
void monotoneIncreasingDigits(int N) {
    int n =  toArray(N);
    int i = n-1;
    while(ar[i] > ar[i-1]){
        i--; cout << " i " << i ;
    }
    if( i == 0 ){
    }else{
        
int index = i;
    cout << index <<endl;
    ar[index] = ar[index]-1;
    for( ; index>=0 ; index--)
        ar[index] = 9;
    }
    
    for(auto x : ar) cout << x <<" ";
}

int main(){
    int n ;
    cin >> n;
    monotoneIncreasingDigits(n);
}