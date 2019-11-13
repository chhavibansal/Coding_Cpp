#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
bool sortbysec( const pair<string ,int> a , const pair<string,int> b){
    if(a.first == b.first)
    return a.second< b.second;
    else return a.first < b.first;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
          string s; int status;
         vector<pair<string ,int>>vec;
        for(int i = 0 ; i < n ; i++){
            cin >> s >> status;
            vec.push_back(make_pair(s, status));
        }

        sort(vec.begin() , vec.end() ,sortbysec);
        int count = 0;
        cout << "sorted";
        for(auto x : vec){
            cout << x.first <<" "<< x.second <<"   ";
            
        }
        cout << endl;
        int count1 = 0 , count0 = 0;
        int j = 0 , total = 0;
        int jump = 0, i = 0;
        
        while(i < vec.size()){
            int val = vec[i].second;
            int  f = 1;count1= 1;
            for( j =i+1 ; j < vec.size() ; j++){
                if(vec[i].first == vec[j].first){
                    if(val == vec[j].second) count1+=1;
                    else count0+=1;
                }else{
                    if(f == 1)
                    jump = j , f = 0,cout << "jump:"<<j<<" ";
                }
            }
            cout << jump;
            i = jump;
            // cout <<"J "<< j;
            cout<< count0 <<" " <<count1<<" ";
            total+= (count1> count0 ?count1 :count0); 
              count0 = 0;
             cout << endl;
        }
        total+= (count1> count0 ?count1 :count0); 
        cout << "Total:" << total;
    }
}