#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int notes, sweets_cost;
        cin >> notes >> sweets_cost;

        int a[notes+1];
        int sum = 0;
        for(int i = 0 ; i < notes ; i++)
        cin >> a[i] , sum+=a[i];
        bool flag =false;
        int rem = sum%sweets_cost;
      for(int i=0;i<notes;i++){
	         if(a[i]<= rem){
	             flag = true ; 
	             break;
	         }
	     }
           if(flag == true)
	     cout<<"-1"<<endl;
	     else
	     cout<<sum/sweets_cost<<endl;;
	   
        
    }
}