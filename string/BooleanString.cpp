#include<iostream>
using namespace std;
void boolean_string(){
	string s;
	cin>>s;
	char result=s.at(0); 
	for(int k=1;k<s.length();k+=2){
// 		int nxt=k+1; 
	char val=s.at(k+1);
		if(s.at(k)=='A'){
			result=result&val;
		}
		else if(s.at(k)=='B'){
			result=result|val;
		}
		else if(s.at(k)=='C'){
			result=result^val;
		}
	}
	cout<<result<<endl;
}
int main(){
	int i,t,j;
	cin>>t;
	for(i=0;i<t;i++)
		
		boolean_string();
}
