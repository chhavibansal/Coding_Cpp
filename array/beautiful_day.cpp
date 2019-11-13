#include<iostream>
using namespace std;
int rev(int m){
    int rem=0,rev=0;
    while(m>0){
        rem=m%10;
        rev=rev*10+rem;
        m=m/10;
    }
    return rev;
}
// Complete the beautifulDays function below.
int beautifulDays(int i, int j, int k) {
    int count=0;
    // cout<< 9/6;
    for(int m=i; m<= j; m++)
    {
        int reverse = rev(m); cout<<reverse<<" ";
        float float_val = (float)(abs(reverse-m))/k; cout<<float_val<< " ";
        int int_val = (abs(reverse-m))/k; cout<< int_val<<" ";
        if(float_val == int_val) count++;
    }
return count;
}

int main(){
    int n,i,k,j;
     cin>>i>>j>>k;
    cout<< beautifulDays(i,j,k);
    //  int arr[n]={0};
    //  for(i=0;i<n;i++) cin>>arr[i];
    //  sort(arr,arr+n);
     
}