class Solution {
public:
    vector<int> sums;

    int rangeSum(vector<int>& nums, int n, int left, int right) {
       int sum = 0 ;
        const unsigned int M = 1000000007; //10^9+7
        vector<int> csum;
        // cummulative sum array 
        for(int i =0 ; i < n; i++){
            sum =( sum+nums[i])%M;
            csum.push_back(sum);
        }
        
        // int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            sums.push_back(csum[i]);
            for(int j = i+1 ; j < n ; j++){
                sums.push_back(csum[j]-csum[i]);
            }
        }
        sum = 0 ;
        sort(sums.begin() , sums.end());
        for(int i = left-1; i <=right-1; i++){
            sum+= sums[i];
        }
        return sum;
        
    }
};
