#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0 ; i < n ; i++)
        cin >> a[i];
        int cnt = 0;
       for(int i = 0 ; i < n ; i++){
           int sum = 0, pro = 1;
	        for(int j= i ; j < n ; j++){
	            sum += a[j]; pro *= a[j];
	            if(sum == pro)
	                cnt += 1;
            }
       }
        cout << cnt <<"\n";
    }
}