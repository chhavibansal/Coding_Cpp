#include <bits/stdc++.h>
using namespace std;
int lcs(vector<int>& nums)
{
    set<int> st(nums.begin(), nums.end());
        int currStreak = 0, maxStreak = 0, currNum = -1;
        for(int num : nums){
            if(!st.count(num-1)){
                currStreak = 1, currNum = num;
                while(st.count(currNum+1)){
                    currStreak+=1;
                    currNum+=1;
                }
                maxStreak = max(currStreak , maxStreak);
            }
        }
        return maxStreak;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n+1,0);
        for(int i=0;i<n;i++)
        {
            int u;
            cin>>u;
            v.push_back(u);
        }
        cout<<lcs(v)<<endl;
    }
	//code
	return 0;
}