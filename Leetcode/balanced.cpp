#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int balancedStringSplit(string s) {
        int n = s.size();
        vector<int> vec(s.size());        
        for(int i = 0 ; i < n ; i++){
            if(s[i] == 'R') vec[i] = 1;
            else vec[i] = -1;
        }
        // for(int x : vec)cout << x;
        // cout << endl;

        map<int,int> mp;
        int sum(0) , count(0), head(-1);
        mp[0] = head;
        for(int i = 0 ; i < n ; i++){
            sum+= vec[i];
            // cout << "sum:"<<sum<<" ";
            if(mp.find(sum)!= mp.end()){
                if(mp[sum] >= head){
                    // cout <<"S:"<< sum<<"   ";
                    head = i, count+=1 ;
                    //  cout <<" head"<< head <<" "<<count<<" ..\n";
                    } 
            }
            
            mp[sum] = i;
        }
        // if(mp.find(sum) != mp.end()){
        //     if(mp[sum] >= head){
        //       cout <<"S:"<< sum<<"   ";
        //             head = s.size(), count+=1 ; cout <<" head"<< head <<" "<<count<<" ..\n";} 
        // }
        return count;
    }
};
int main(){
    Solution s;
    string str = "RRLRRLRLLLRL";
    cout << s.balancedStringSplit(str);
}