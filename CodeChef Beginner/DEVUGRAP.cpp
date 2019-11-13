#include"iostream"
using namespace std;
typedef long long int ll;
int main(){
    int val = 1 << 4;
    cout << val;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll n , k;
        cin >> n >> k;
        ll a[n];
        for(int i = 0 ; i < n ; i++)
        cin >> a[i];
        ll count=0;
        ll div = k/2;
        for(int i = 0; i < n ; i++){
            int rem = a[i]%k;
            if(a[i]/k != 0){
                if(rem <= div)
                count+=rem;
                else 
                count += k-rem;
            }else{
                count+= k-rem;
            }
        }
        cout << count <<"\n";
    }
}