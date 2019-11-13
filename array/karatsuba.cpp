#include<iostream>
using namespace std;
typedef long long ll;
void karatsuba(ll int num1[],ll int num2[],int len_num1,int len_num2){
	int len1_2=len_num1/2;
	int len2_2=len_num2/2;
	int a,b,c,d;
	for(int i=0;i<len_num1;i++){
		if(i<=len1_2)
		a=a*10+num1[i];
		else
		b=b*10+num1[i];
	}	
	cout<<a<<" "<<b;
}
int main(){
	ll int num1[]={1,2,3,4};
	ll int num2[]={5,6,7,8};
	int len_num1=sizeof(num1)/sizeof(num1[0]);
	int len_num2=sizeof(num2)/sizeof(num2[0]);
	karatsuba(num1,num2,len_num1,len_num2);
}
