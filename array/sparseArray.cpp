#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	string arr1[n];
	for(i=0;i<n;i++)
	cin>>arr1[i];
	int q; cin>>q;
	int arr2[q];
	for(i=0;i<q;i++)
	cin>>arr2[i];
	int result[q]={0};
	for(i=0;i<q;i++){
		string s2=arr2[i];
		for(j=0;j<n;j++){
			string s1=arr1[j];
			if(s1==s2){
				count=count+1;
			}
		}
		result[i]=count;
	}
	for(i=0;i<n;i++)cout<<result[i]<<" ";
}
