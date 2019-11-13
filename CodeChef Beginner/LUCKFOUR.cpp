#include<bits/stdc++.h>
using namespace std;
int sum_digit(int n){
  int sum = 0;
  while(n > 0){
      sum+= (n%10);
      n = n/10;
  }
  return sum;
}
int main(){
 int t;
 cin >> t;
 while(t--){
     int n; cin >> n;
     vector<int> vec(n,0);
     int d;
     for(int i = 0 ; i < n ; i++)
     cin >> d, vec.push_back(d);
     for(auto x : vec) cout << x<<endl;
    int max_sum = 0;
     for(int i =0 ;i < n-1 ; i++){
         for(int j = i+1 ; j < n ; j++){
             int val = vec[i]*vec[j];
             int z = sum_digit(val);
             cout << z;
            max_sum = max(max_sum , z);
         }
     }
     cout << max_sum << endl;
 }   
}