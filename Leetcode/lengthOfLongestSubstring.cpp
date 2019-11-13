#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int currLen = 1 , maxLen = 1;
        vector<int> ch(256,-1);
        int last_visited = -1;
        ch[s[0]] = 0;
        
        for(int i = 1; i < s.size() ; i++){
            last_visited = ch[s[i]];
            // check if character occured for the first time 
            // OR it has occured outside window size i - currLen 
            if(last_visited == -1 || last_visited < (i-currLen)){
                currLen++;
            }else{
                maxLen = max(maxLen, currLen);

                currLen =  i - last_visited;
            }
            ch[s[i]] = i;
            
        }
        if(currLen > maxLen) currLen  = maxLen;
        return maxLen ;
    }
};
int main(){
    string s;
    cin >> s;
    Solution sn;
    cout << sn.lengthOfLongestSubstring(s);
}