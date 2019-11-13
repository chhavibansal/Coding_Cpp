#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int ,int>> vec;
        int x ,y;
        for(int i = 0 ; i < n ; i++){
            cin >> x >> y;
            vec.push_back(make_pair(x,y));
        }
        sort(vec.begin() , vec.end() , [](pair<int,int> p1 , pair<int,int> p2){
            if(p1.first != p2.first)
            return p1.first < p2.first;
            else
            return p1.second > p2.second;
        });

        double dist=0;
        for(int i = 0 ; i < n-1 ; i++){
            // calc diss 
            double a =vec[i].first - vec[i+1].first;
            double b = vec[i].second - vec[i+1].second ;
            double powa= pow(a,2);
            double powb = pow(b,2);
            double l = sqrt(powa + powb);
            dist += l;
        }
        cout << fixed << setprecision(2) << dist << endl;
    }
}