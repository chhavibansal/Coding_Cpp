#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int count = 0;
		if(n <= 2048){
		while(n>0){
			if(n&1)count+=1;
			n>>=1;
			
		}
		
		}else{
			int num  = n%2048;
			count = n/2048;
			while(num > 0){
			if(num & 1) count+=1;
			num>>=1;
			}
		}
		cout << count <<"\n";
	}
}