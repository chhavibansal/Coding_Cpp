#include <iostream>
#include <cmath>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
     
    int t;
    cin >> t;
    while(t--){
        int  n , a , k;
        cin >> n >> a >> k;
        // sum of interior angle
        int sum = (n-2)*360;
        cout << "sum : "<< sum <<"\n";
        ll num = sum - 2*n*a;
        cout << "num : "<< num <<"\n";
        ll den = n*(n-1);
        cout << "den : "<< den <<"\n";
        int d = num/den;
        cout << "d : "<< d <<"\n";
        int kth = a+(k-1)*d;
        cout << "k : "<< kth <<"\n";


    }
}