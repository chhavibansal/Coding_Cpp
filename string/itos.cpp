#include<iostream>
#include<string>
#include<sstream>
using namespace std;
template<typename T>
string itos(T i){
    stringstream s;
    s<<i;
    return s.str();

}
int main(){
    int i=155;
    float k=155.5;
    string ss= itos(k);

    cout<<ss<<"\n";
}