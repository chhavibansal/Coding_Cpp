#include<bits/stdc++.h>
using namespace std;
char arr[3][3]={'1','2','3','4','5','6','7','8','9'};
char player='X';
// https://www.youtube.com/watch?v=xwwl8TgkwgU
void draw(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void input(){
    int a;
    cout<<endl;
    cout<<player<<" Please provide input";
    cin>>a;
    if(a==1)     { if(arr[0][0]=='1') arr[0][0]=player; else {cout<<"try again field already occupied"; input();}}
    else if(a==2)  { if(arr[0][1]=='2') arr[0][1]=player; else {cout<<"try again field already occupied"; input();}}
    else if(a==3) { if(arr[0][2]=='3') arr[0][2]=player; else {cout<<"try again field already occupied"; input();}}
    else if(a==4) { if(arr[1][0]=='4') arr[1][0]=player; else {cout<<"try again field already occupied"; input();}}
    else if(a==5) { if(arr[1][1]=='5') arr[1][1]=player; else {cout<<"try again field already occupied"; input();}}
    else if(a==6) { if(arr[1][2]=='6') arr[1][2]=player; else {cout<<"try again field already occupied"; input();}}
    else if(a==7) { if(arr[2][0]=='7') arr[2][0]=player; else {cout<<"try again field already occupied"; input();}}
    else if(a==8) { if(arr[2][1]=='8') arr[2][1]=player; else {cout<<"try again field already occupied"; input();}}
    else if(a==9) { if(arr[2][2]=='9') arr[2][2]=player; else {cout<<"try again field already occupied"; input();}}
}
char win(){
    if(arr[0][1]=='X' && arr[0][2]=='X' && arr[0][0]=='X')      return 'X';
    if(arr[1][1]=='X' && arr[1][2]=='X' && arr[1][0]=='X')      return 'X';
    if(arr[2][1]=='X' && arr[2][2]=='X' && arr[2][0]=='X')      return 'X';
    if(arr[0][0]=='X' && arr[2][2]=='X' && arr[1][1]=='X')      return 'X';
    if(arr[0][2]=='X' && arr[1][1]=='X' && arr[2][0]=='X')      return 'X';
    if(arr[0][0]=='X' && arr[1][0]=='X' && arr[2][0]=='X')      return 'X';
    if(arr[0][1]=='X' && arr[1][1]=='X' && arr[2][1]=='X')      return 'X';
    if(arr[0][2]=='X' && arr[1][2]=='X' && arr[2][2]=='X')      return 'X';

    if(arr[0][1]=='O' && arr[0][2]=='O' && arr[0][0]=='O')      return 'O';
    if(arr[1][1]=='O' && arr[1][2]=='O' && arr[1][0]=='O')      return 'O';
    if(arr[2][1]=='O' && arr[2][2]=='O' && arr[2][0]=='O')      return 'O';
    if(arr[0][0]=='O' && arr[2][2]=='O' && arr[1][1]=='O')      return 'O';
    if(arr[0][2]=='O' && arr[1][1]=='O' && arr[2][0]=='O')      return 'O';
    if(arr[0][0]=='O' && arr[1][0]=='O' && arr[2][0]=='O')      return 'O';
    if(arr[0][1]=='O' && arr[1][1]=='O' && arr[2][1]=='O')      return 'O';
    if(arr[0][2]=='O' && arr[1][2]=='O' && arr[2][2]=='O')      return 'O';
    return '/';
}
void togglePlayer(){
    if(player== 'X')player='O';
    else if(player=='O')player='X';
}

int main(){
    int n=0;
    draw();
    while(1){
        n++; // check no of moves made yet
        input();
        draw();
        if(win() == 'X'){
            cout<<" X wins "<<endl;
            break;
        }
        else if(win() =='O') {
            cout<<" O wins!"<<endl; 
            break;
        }
        else if(win()=='/' && n==9){
            cout<<" Its a draw"<<endl;
            break;
        }
        togglePlayer();
    }
    system("pause");
    return 0;
}
