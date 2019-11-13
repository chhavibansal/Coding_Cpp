#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0 ; i < n ; i++)
        cin >> a[i];

        int nums[n];
        nums[0] = a[0];

        for(int i = 1 ; i < n ; i++){
            nums[i] = min(nums[i-1] , a[i]);
        } 
        int count  = 0;
        for(int i= 0 ; i < n ; i++){
            if(nums[i] == a[i])
            count++;
        }
        cout << count << endl;
    }
}