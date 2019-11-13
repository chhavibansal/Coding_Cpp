#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin >> t;
    int arr[100005];
    while(t--){
      	long int n,val=0,count=0,i;
		cin>>n;
		for( i=1;i<=100005;i++)
		arr[i]=0;
		for( i=1;i<=n;i++){
			cin>>val;
			arr[val]=1;
		}
		count=0;
		for(i=1;i<=100005;i++){
			if(arr[i]==1)
			count++;
		}
		cout<<count<<endl;
    }
}
