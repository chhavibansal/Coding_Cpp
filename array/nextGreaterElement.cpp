#include<iostream>
#include<vector>
using namespace std;
vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> res;
        for(int i=0;i<findNums.size();i++){
            int val=findNums[i];
            int max=-1,j=nums.size()-1;
            while( nums[j] !=val ){
                if(nums[j] > val) {max=nums[j];}
                j--;
            }
            res.push_back(max);
        }
        return res;
}
int main(){
    vector<int> a={4,1,2};
    vector<int> b={1,3,4,2};
    vector<int> res=nextGreaterElement(a,b);
    for(int it:res) cout<<it<<" ";
}