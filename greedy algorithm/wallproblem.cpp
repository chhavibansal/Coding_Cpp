#include<bits/stdc++.h>
using namespace std;
void minSpacePreferLarge(int wall,int m,int n){
	int num_n=0,num_m=0,min_empty=wall;
	int p=0,q=0,rem;
	while(wall>=n){
		q=q+1; wall=wall-n;
		p=wall/m;
		rem=wall%m;
		if(rem<=min_empty){
			num_m=p;
			num_n=q;
			min_empty=rem;
		}
	}
	cout<<num_m<<" "<< num_n<<" "<<min_empty<<endl;
}
int main(){
	int wall=24,m=3,n=5;
	minSpacePreferLarge(wall,m,n);
}
