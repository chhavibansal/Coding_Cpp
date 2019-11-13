#include "bits/stdc++.h"
#include "algorithm"
using namespace std;
typedef long long int ll;
bool fn(string s, vector<int> vec)
{   
    vector<int> dup(vec.begin() , vec.end());
    for (int i = 0; i < s.size(); i++)
    {
        if (dup[s[i]-'a'] <= 0)
            return false;
        else
            dup[s[i]-'a'] -= 1;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;

        int n;
        cin >> n;
        vector<string> str;
        string s;
        vector<int> vec(26 ,0);
       
        for(int i = 0 ; i < n; i++){
            cin >> s;
            str.push_back(s);
        }
        for(int i = 0 ;i < a.size() ; i++){
            vec[a[i]-'a'] +=1;
        }
        for(int i = 0 ;i < b.size() ; i++)
         vec[b[i]-'a'] +=1;
        int i = 0;
        bool flag = true;
        while( i < str.size()){
            flag = fn(str[i] , vec) ;
            if(flag == false){
                cout << "NO"<< endl; break;
            }
            i+=1;
        }
        if(flag == true)
        cout <<"YES"<<endl;
    }
}