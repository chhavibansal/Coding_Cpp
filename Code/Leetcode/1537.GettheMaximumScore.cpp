class Solution {
public:
    int maxSum(vector<int>& A, vector<int>& B) {
        long s1 = 0 , s2= 0;
        int i = 0 , j = 0 , n = A.size() , m = B.size();
        long res = 0 ;
        while( i < n and j < m ){
            if(A[i] < B[j]){
                s1 += A[i];
                i+=1;
            }else if(B[j] < A[i]){
                s2+= B[j];
                j+=1;
            }else{
                res+= max(s1, s2)+ A[i];
                i+=1 , j+=1;
                s1 = 0 , s2= 0 ;
            }
        }
        
        // remaining array
        while( i < n ){
            s1+=A[i++];
        }
        while( j < m ){
            s2+=B[j++];
        }
        return (max(s1 , s2)+ res)%1000000007;
    }
};
