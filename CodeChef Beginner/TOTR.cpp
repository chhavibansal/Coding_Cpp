#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main()
{
    int n ;
    cin >> n;
    string m;
    cin >> m;
    while(n--){
        string str;
        cin >> str;
        int i = 0;
        for( i = 0 ; i < str.size() ; i++){
            char ch = str[i];
            if(ch == '_')
            cout << " ";
            else if(isupper(ch)){
                char  c = tolower(ch);
                char z = toupper(m[c-'a']); cout << z;
            }
            else if(ch =='.' || ch ==',' || ch =='?' || ch=='!')
            cout << ch;
            else
            {
                cout << m[ch-'a'];
            }
            
        }
        cout << endl;
    }
}
