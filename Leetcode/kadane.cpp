#include"iostream"
#include"climits"
using namespace std;
void kadane(int* a ,int n){
    int min_v = INT_MIN;
    int sum =  a[0];
    int msum = a[0];
    for(int i =  1; i < n ; i++){
        sum+= a[i];
        if(sum > msum)
        msum = sum;
        if(sum < 0)
        sum= 0;
    }
    cout << msum ;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++)
    cin >> a[i];
    kadane(a,n);
}