#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n] ,b[n];
        int a_max = 0 ,b_max = 0;
        int sum_a  = 0 , sum_b = 0;
        for(int i = 0 ; i< n; i++)
        {
            cin >> a[i];
            sum_a+=a[i];
            if(a[i] > a_max) a_max  = a[i];
        }
        sum_a -=a_max;
        for(int i = 0 ; i < n ; i++){
            cin >> b[i];   
            sum_b+=b[i];
            if(b[i] > b_max) b_max  = b[i];
        }
        sum_b-= b_max;
        
        if(sum_a  > sum_b){
            cout <<"Bob\n";
        
        }else if(sum_a < sum_b)
        cout <<"Alice\n";
        else
        {
            cout <<"Draw\n";
        }
           
    }
}