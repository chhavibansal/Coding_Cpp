#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main(){
int t;
cin >> t;
int arr[10]={6,2,5,5,4,5,6,3,7,6};
while(t--){
    ll a , b;
    cin >> a >> b;
    ll no = a+b;
    int count = 0;
while(no>0){
	int n = no%10;
	count+=arr[n];
	no/=10;
}
cout << count <<"\n";
}
}