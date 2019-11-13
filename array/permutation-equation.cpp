#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int p[n]={0},next[n]={0};
	for(int i=1;i<=n;i++)
	cin>>p[i];
	int index;
	for(index=1;index<=n;index++){
		int i=1;
		while(p[i]!=index && i<=n){
			i++;
		}
		next[index]=i;
	}
	for(int i=1;i<=n;i++){
		cout<<next[next[i]]<<"\n";
	}
	
}
