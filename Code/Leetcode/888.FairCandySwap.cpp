class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int a = 0 , b = 0 ;
        for(int X: A) 
            a+=X;
        for(int X:B)
            b+=X;
        vector<int>ans;
        int n = A.size(), m = B.size();
        for(int i =n-1 ; i>=0 ; i--){
            for(int j = m-1; j>=0 ; j--){
                int diff = A[i] -B[j];
                if(a-diff == b+diff){
                    ans.push_back(A[i]);
                    ans.push_back(B[j]);
                    return ans;
                }
            }
        }
        
        return ans;
        
    }
};