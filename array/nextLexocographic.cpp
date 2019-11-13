#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={0,1,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i,j,largestI=-1,largestJ=-1;
	for(i=0;i<n;i++){
		if(arr[i]<arr[i+1])
			largestI=i;
		if(largestI==-1) {break;
		cout<<" No valid permutation possible";
		}
	}
	for(j=0;j<n;j++){
		if(arr[largestI]<arr[j]){
			largestJ=j;
		}
	}
	swap(largestI,largestJ);
	
	cout<<largestI;
	cout<<largestJ;
}
