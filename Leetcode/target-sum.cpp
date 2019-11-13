#include"bits/stdc++.h"
using namespace std;
void countPair(vector<int> vec, int target){
    set<int> st(vec.begin() , vec.end());

    for(int i = 0 ; i < vec.size() ; i++){
        if(st.count(target-vec[i])){
            cout << vec[i] << " & "<< target-vec[i] << endl;
            auto it =   st.find(vec[i]);
            if(it  != st.end()) st.erase(it);
        }
    }
}
int main(){
    vector<int> vec={1, 5, 7, -1, 5};
    int target;
    cin >> target;
    countPair(vec, target);
}