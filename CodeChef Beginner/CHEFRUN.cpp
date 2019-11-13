#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
	float a,b,c,m,n;
	cin >> a >> b >> c >> m >> n;
	int d1 = c-a;
	int d2= b-c;
	float t1 = (float)(d1/m);
	float t2 = (float)(d2/n);
    // cout << t1 <<" "<< t2;
	if(t1 > t2) cout <<"Kefa\n";
	else if (t1 < t2) cout <<"Chef\n";
	else cout <<"Draw\n";
}
}