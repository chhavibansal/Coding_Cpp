#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int num){
	int temp=num;
	int rem=0,rev=0;
	while(num>0){
		rem=num%10;
		num=num/10;
		rev=rem+rev*10;
	}
	if(rev!=temp) return false;
	return true;
}
int largestPal(int arr[],int n){
	sort(arr,arr+n);
	for(int i=n-1;i>=0;i--){
		if(isPalindrome(arr[i]));
//		cout<<arr[i];
		return arr[i];
	}
	return -1;
}
int main(){
	int arr[]={1, 232, 54545, 999991};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<largestPal(arr,n);
}
