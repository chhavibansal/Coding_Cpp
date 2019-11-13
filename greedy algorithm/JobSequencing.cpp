#include<bits/stdc++.h>
using namespace std;
struct Job{
	char id;
	int deadline;
	int profit;
};
bool compareJob(Job j1,Job j2){
	return j1.profit>j2.profit;
}
void maximiseProfit(Job arr[],int n){
	sort(arr,arr+n,compareJob);
	int i,j;
	i=0;
	cout<<"("<<arr[i].id<<","<<arr[i].deadline<<","<<arr[i].profit<<")";
	for(j=1;j<n;j++){
		if(arr[j].deadline>=arr[i].deadline){
			cout<<"("<<arr[j].id<<","<<arr[j].deadline<<","<<arr[j].profit<<")";
			i=j;
		}
	}
}
int main(){
//	Job arr={{'a',2,100},{'b',1,19},{'c',2,27},{'d',1,25},{'e',3,15}};
Job arr[] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27}, 
                   {'d', 1, 25}, {'e', 3, 15}}; 
	int n=sizeof(arr)/sizeof(arr[0]);
	maximiseProfit(arr,n);
}

