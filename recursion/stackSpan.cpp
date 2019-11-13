#include<iostream>
#include<stack>
using namespace std;
void printSpan(int a[], int n){
    stack<int> s;
    int ans[100]={};
    for(int day =0 ; day < n ; day++){

        //current value of array
        int currPrice = a[day];

        while(s.empty() == false && a[s.top()] < currPrice)
            s.pop();
//stack is being pushed by day
        int betterDay = s.empty() ? 0 : s.top();
        int span = day - betterDay ; 
        ans[day] =  span;
        s.push(day);
    }
    for(int i = 0 ; i  < n ; ++i){
        cout << ans[i]<<" ";
    }
}
int main(){
    int n = 7;
    int a[200]={100,80,60,70,60,75,85};
    printSpan(a,n);
} 