#include<iostream>
#include<vector>
using namespace std;
char keypad[][10]= {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
vector<string> res;
void call(char* in , char *out , int i , int j){
    // base case
    if(in[i] == '\0'){
        out[j] = '\0';
        res.push_back(out);
        return;
    }

    // recursion
    int digit = in[i]-'0';
    if(digit == 1 || digit == 0)
    return ;
    for(int k  = 0  ; keypad[digit][k] !='\0' ; k++){
        out[j]  = keypad[digit][k];
        call(in , out , i+1 , j+1);
    }
}
int main(){
    char in[100];
    cin >> in;
    char out[100];
    call(in , out , 0 , 0);
    for(auto X: res)
    cout << X << "  ";
}