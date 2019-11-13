#include<iostream>
using namespace std;
typedef long long ll;
int main(){
	ll n,m;
	int i,j;
	cin>>n>>m;
	int q[m][3]={0};
	for(i=1;i<=m;i++){
		for(j=1;j<=3;j++){
			cin>>q[i][j];
		}
	}
	int max=0;
	int arr[m][n]={0};
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			if(q[i][j]==j && j< ){
				arr[i][j]=q[i][3]+arr[i-1][j];
				if(arr[i][j]>max){
					max=arr[i][j];
				}
			}
			else{
				arr[i][j]=arr[i-1][j];
			}
		}
	}
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}	
	
	cout<<max;
	
}
