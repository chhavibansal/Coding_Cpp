#include<iostream>
using namespace std;
int maxDiff(int a[],int n){
	int i,min_element;
	int max_diff=a[1]-a[0];
		min_element=a[0];
		
	for(i=1;i<n;i++)
	{
		if(a[i]-min_element>max_diff)
		max_diff=a[i]-min_element;
		if(a[i]<min_element)
		min_element=a[i];
	}
	return max_diff;
}
int main(){
	int a[]={1,2,90,10,110};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<maxDiff(a,n);
}
