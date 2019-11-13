#include <iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{int t;
cin >> t;
while(t--){
    int n,k;
    cin >> n >> k;
    int a[n];
    int count_1 = 0;
    int x;
    for(int i = 0 ; i < n ; i++){
        cin >> x;
        if(x != 1)
        count_1+=1;
        a[i] = x;
    }
    if( count_1 <= k)
    cout <<"YES\n";
    else cout <<"NO\n";
    
}
}