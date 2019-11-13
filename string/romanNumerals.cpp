#include<iostream>
using namespace std;
string intoRoman(int num){
	string t[]={" ","M","MM","MMM"};
	string h[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
	string x[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
	string o[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
	string thousands=t[num/1000];
	string hundreds=h[(num%1000)/100];
	string tens=x[(num%100)/10];
	string ones=o[num%10];
	string ans=thousands+hundreds+tens+ones;
	return ans;
}
int main(){
	int num=3549;
	cout<<intoRoman(num);
}
