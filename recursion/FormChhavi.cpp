#include<iostream>
#include<vector>
using namespace std;
char keypad[][10]= {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
vector<int> res;
// void call(char* in , char *out , int i , int j){
//     // base case
//     if(in[i] == '\0'){
//         out[j] = '\0';
//         res.push_back(out);
//         return;
//     }
// // CHHAVI 
//     // recursion
//     int digit = in[i]-'0';
//     if(digit == 1 || digit == 0)
//     return ;
//     for(int k  = 0  ; keypad[digit][k] !='\0' ; k++){
//         out[j]  = keypad[digit][k];
//         call(in , out , i+1 , j+1);
//     }
// }
void fnName(char* in , int i ){
    if(in[i] == '\0'){
        for(auto x: res)
        cout << x << " ";
        return ;
    }
    // base case
    int digit = 2;
    for(int digit = 2 ; digit  <=9 ; digit++)
    for(int k = 0 ; keypad[digit][k] !='\0' ; k++){
        if(keypad[digit][k] == in[i]){
            // cout << in[i]<<"  ,";
            for(int i = 0 ; i <= k ; i++) res.push_back(digit);
            return fnName(in , i+1);
        }
    }
}
int main(){
    char in[100];
    cin >> in;
    char out[100];
    fnName(in , 0);
    // call(in , out , 0 , 0);
    // for(auto X: res)
    // cout << X << "  ";
}