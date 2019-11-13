#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m ,x;
        cin >> n >> m;
        
        int a[n+1]={0};
        for(int i = 0 ; i < m ; i++)
        cin >> x,  a[x]  = 1;  
        vector<int> chef , assistant;
        bool flag = true;
        for(int i = 1 ; i <= n ; i++ ){
            if(a[i] != 1){
                if(flag == true)
                    chef.push_back(i) , flag = false;   
                else
                {
                    assistant.push_back(i) , flag = true;
                }
            }
        }
        for(auto x : chef) cout <<  x <<" ";
        cout << endl;
        for(auto x : assistant ) cout << x <<" ";
        cout << endl;

    }
}