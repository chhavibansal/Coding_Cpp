#include<bits/stdc++.h>
using namespace std;
int policeThief(char arr[],int n,int k){
	int i,res=0;
	vector<int> thi;
	vector<int> pol;
	for(i=0;i<n;i++){
		if(arr[i]=='p')
		pol.push_back(i);
		else if (arr[i]=='t')
		thi.push_back(i);
	}
	int l=0,r=0;
	while(l<thi.size() && r< pol.size()){
		if(abs(thi[l]-pol[r])<=k){
			res++;
			l++; r++;
		}
		else if(thi[l]<pol[r]) l++;
		else r++;
	}
	return res;
}
int main(){
	int k,n;
	char arr1[]={'p','t','t','p','t'};
	k=2;
	n=sizeof(arr1)/sizeof(arr1[0]);
	cout<<"mximum thieves caught "<< policeThief(arr1,n,k)<<endl;
	 char arr3[] = { 'p', 't', 'p', 't', 't', 'p' }; 
    k = 3; 
    n = sizeof(arr3) / sizeof(arr3[0]); 
    cout << "Maximum thieves caught: " 
         << policeThief(arr3, n, k) << endl; 
}
