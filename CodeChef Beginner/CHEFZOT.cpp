#include"bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin >> n;
    int nums[n];
    for(int i = 0 ; i < n ; i++)
    cin >> nums[i];

    int curr = 0 , maxLen = 0;
    for(int i = 0 ; i < n ; i++){
        if(nums[i] != 0){
            curr+=1;
            maxLen = max(maxLen , curr);
        }else{
            curr = 0;
        }
    }
    cout << maxLen << endl;
}