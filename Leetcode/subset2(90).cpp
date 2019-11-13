#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         sort(nums.begin(), nums.end());
        vector<vector<int>> result = {{}};
        int start;
        for(int i=0; i<nums.size(); i++) {
            if(i==0 || nums[i] != nums[i-1]) start = 0;
            cout << "Start "<< start;
            for(int end=result.size(); start<end; start++){
                cout << " end "<< end <<" ?";
                for(auto x : result) 
                for(auto y : x) cout << y <<" ";
                 cout << "BUS BHAI\n";
                vector<int> clone = result[start];
                for(auto x : clone) cout << x << " | ";
                cout << endl;
                clone.push_back(nums[i]);
                result.push_back(clone);
            }
        }
        return result;
    }
};
int main(){
    vector<int> num ={1,2,2};
    Solution s;
   vector<vector<int>> res ;
   res = s.subsetsWithDup(num);

    
}