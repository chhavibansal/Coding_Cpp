#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0 ; i < n ; i++)
        cin >> arr[i];
       float count_pair = 0;
       sort(arr , arr+n);
       int maxSum = arr[n-2]+ arr[n-1];
       for(int i = 0 ; i < n ; i++){
           for(int j = i+1 ; j <n ; j++){
               if(arr[i]+arr[j]  == maxSum)
               count_pair+=1;
           }
       }
       int totalPair = (n*(n-1))/2;
        double prob = count_pair/totalPair;
        cout << fixed << setprecision(8);
        cout << prob << "\n";
    }
}