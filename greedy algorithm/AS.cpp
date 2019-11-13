#include<bits/stdc++.h>
using namespace std;
struct Activity{
	int start,finish;
};
bool activityCompare(Activity a1,Activity a2){
	return(a1.finish<a2.finish);
}
void ActivitySelection(Activity arr[],int n){
	int i,j;
	
	sort(arr,arr+n,activityCompare);
	i=0;
	cout<<"("<<arr[i].start<<","<<arr[i].finish<<"),";
	for(j=1;j<n;j++){
		if(arr[i].finish<=arr[j].start){
			cout << "(" << arr[j].start << ", "
              << arr[j].finish << "), "; 
			i=j;
		}
	}
}
int main(){
	Activity arr[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}}; 
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"The Selected Activities in order are\n\n";
	ActivitySelection(arr,n);
}
