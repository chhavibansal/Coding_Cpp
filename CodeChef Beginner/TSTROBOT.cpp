#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n , start;
        cin >> n >> start;
        start = n;

        string s;
        cin >> s;
        set<int> st;
        int pos = 0;
        st.insert(pos);
        for(int i= 0; i < s.size() ; i++ ){
            if(s[i] == 'R'){
                pos+=1;
                st.insert(pos);
            }else{
                pos-=1;
                st.insert(pos);
            }
        }
        cout << st.size()<<"\n";
    }
}