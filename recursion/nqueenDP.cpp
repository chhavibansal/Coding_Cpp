#include<bits/stdc++.h>
using namespace std;
bool canPlace(int board[][4], int x , int y , int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if( board[i][j] == 1){
                if(x == i or y == j or  x-y  == i-j or x+y == i+j)
                return false;
            }
        }
    }
    return true;
}
void solveNQueen(int board[][4], int i  , int n ){
    if(i == n){
        for(int i = 0 ; i < 4; i++){
            for(int j = 0 ; j < 4 ;j++){
                cout << board[i][j]<<" ";
            }
            cout << endl;
        }
        cout << endl;
        return ;
    }
    for(int j = 0 ; j < 4 ; j++){
        if(canPlace(board, i , j , n)){
            board[i][j]= 1;
            solveNQueen(board , i+1 , n);
            board[i][j] = 0;
        }
    }
}
int main(){
    int board[4][4];
    memset(board, 0 , sizeof(board));
    solveNQueen(board,0 ,4);
}