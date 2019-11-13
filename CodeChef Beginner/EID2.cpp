#include<bits/stdc++.h>
using namespace std;
bool fn(){
    int a,b,c ,m, n, o;
    cin >> a >> b >> c >> m >> n >> o;
    vector<pair<int,int>> vec;
    vec.push_back(make_pair(a,m));
    vec.push_back(make_pair(b,n));
    vec.push_back(make_pair(c,o));

    sort(vec.begin() , vec.end() , [](pair<int,int>a ,pair<int,int> b){
        return a.first < b.first;                                                                               
    });

    // sorted ascending
    bool flag = true;
    for(int i = 0 ; i < 2 ; i++){
        if(vec[i].first < vec[i+1].first){
            if(vec[i].second >= vec[i+1].second){ flag = false; break;}
        }
        if(vec[i].first == vec[i+1].first){
            if(vec[i].second != vec[i+1].second) { flag = false; break;}
        }
    }
    return flag;

}
int main(){
    int t;
    cin >> t;
    while(t--){
        bool ans = fn();
        if(ans == true){
            cout <<"FAIR"<<endl;
        }else{
            cout << "NOT FAIR"<<endl;
        }
    }
}