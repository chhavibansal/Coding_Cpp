#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll nums[n];
        for(int i = 0 ; i < n ; i++)
            cin >> nums[i];

        sort(nums , nums+n);
        ll sum = 0;
        for(int x : nums)
        sum+=x;
        int i = 0;
        ll ans = 0;
        if(nums[i] >= 0 )
            ans = abs(sum - 2*nums[0]);
        else{
             i=
            int sumn = 0;
            while(nums[i] < 0)
            sumn += nums[i] , i++;


            sum = 0;
            for( ; i < n ; i++)
            sum+=nums[i];
            ans = abs(sum - sumn);
        }
        cout << ans << endl;

    }
}
