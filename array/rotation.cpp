//#include<iostream>
//#include<initializer_list>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={1,2,3,4,5,6,7};
	int n;
	int size=sizeof(arr)/sizeof(arr[0]);
	cin>>n;
	int rep[n]={0};
	for(int i=0;i<n;i++)
		rep[i]=arr[i];
	for(int k=0;k<n;k++)
	for(int j=n-1;j<size;j++)
		arr[j-1]=arr[j];
	
	for(int i=0;i<n;i++)
	arr[size-n+i]=rep[i];
	cout<<"\n Modified array is";
	cout<<'\n';
	for(int i=0;i<size;i++) cout<<arr[i]<<" ";
	std::vector<int> vec{1,2,3,4,5,6,7};
	int rotL=3;
	
	std::rotate(vec.begin(),vec.begin()+3,vec.end());
	vector<int>::iterator itr;
	cout<<'\n';
	for(itr=vec.begin();itr!=vec.end();itr++)
	cout<<*itr<<" ";
}
