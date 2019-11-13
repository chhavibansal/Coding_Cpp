#include<iostream>
#include<string>
using namespace std;
void uncommon_occurance(){
	string s1,s2;
	cin>>s1>>s2;
	string newString;
	int i=0;
	for(i=0;i<s1.length();i++){
		if(s2.find(s1.at(i))==-1)
		newString=newString+s1.at(i);
	}
	for(i=0;i<s2.length();i++){
		if(s1.find(s2.at(i))==-1)
		newString=newString+s2.at(i);
	}
	
	if(newString.empty()){
    cout<<"-1"<<endl;}
else {cout<<newString<<endl;}
}
int main(){
	string s1,s2;
	int t,i;
	cin>>t;
	for(i=0;i<t;i++){
	uncommon_occurance();
	}
//find == indexOf	 at==charAt   s1+s2(for concatentation)     
}
