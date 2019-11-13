#include <iostream>
#include<cmath>
using namespace std;
int main() {
	int n,i;
	cin>>n;
	for(i=0;i<n;i++){
	    int arr[100]={0};
	string s;
	cin>>s;
	int l=s.length();

	for( i=0;i<l;i++){
		arr[i]=s.at(i)-48;
	}
	long long sum=0;
	for(i=0;i<n;i++){
		sum=arr[i]*(pow(2,i))+sum;
	}
    cout<<sum<<endl;
	    
	}
	
	return 0;
}
