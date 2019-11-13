#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main(){
    int t ;
    cin >> t;
    while(t--){
        string a,b;
        cin >> a >> b;
        ll count = 0;
        vector<int> vec(257 ,0);
        for(int i = 0 ;i < a.size() ; i++){
            vec[a[i]] +=1;
        }
        for(int i = 0 ;  i < b.size() ; i++){
            if(vec[b[i]] > 0 ){
                count+=1;
                vec[b[i]]-=1;
            }
        }
        cout << count << endl;
    }
}