#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main(){
   int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n, greater<int>());
	unique(a, a + n);
	cout << a[1] % a[0] << endl;
	return 0;
}