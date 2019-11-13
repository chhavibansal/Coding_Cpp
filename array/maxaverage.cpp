
#include<bits/stdc++.h>
#include<climits>
using namespace std;
int arrangeCoins(int n) {
      long ans = n;
    ans = (int)(sqrt(ans * 8 + 1)) - 1; 
    return ans >> 1;
    }
int main(){
            
    int n; cin>>n;
    // long long int ans= 8*n;
    // cout<<ans;
   cout<< arrangeCoins(n);
    int nums[n]={0};
    // for(int i=0;i<n;i++) cin>>nums[i];
    // // for(int i=0;i<n;i++) cout<<nums[i]<<" ";
    // //  double findMaxAverage(vector<int>& nums, int k) {
    //     // int sum=0,max_sum=0;
    //     // nums[]
    //     int k; cin>>k;
    //     nums[0]=nums[0];
    //    for(int i=1;i<n;i++){
    //        nums[i]+=nums[i-1];
    //    }
    //    cout<<"array is"<<endl;
    //    for(int i=0;i<n;i++)
    //    cout<<nums[i]<<" ";
    //     int max=INT_MIN;
    //     for(int i=k-1;i<n;i++){
    //         nums[i]-=nums[i-k];
    //         if(nums[i] > max) max=nums[i];
    //     }
    //     cout<<endl;
    //     cout<<max;
    //     double res=(double)max/k;
    //     // return res;
    //     cout<<res;
    // // }

}