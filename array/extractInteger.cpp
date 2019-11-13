//extract integer from string stream
// >> read from stringstream object
// << add a string to stringstream object
#include<iostream>
#include<sstream>
using namespace std;
void extractInteger(string str){
	stringstream ss;
	ss<<str;
	string temp;
	int found;
	while(!ss.eof()){
		ss>>temp;
		if(stringstream(temp)>>found)
		cout<<found<<" ";
		temp="";
	}
}
int main(){
	string str="1: 2 3 4 prakhar";
	extractInteger(str);
}
