// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const int D = 10;

void printBoard(int board[D][D], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << setw(3) << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool canPlace(int board[D][D], int n, int row, int col, int curNum) {
    if (board[row][col] != 0) return false;
    // check the row and col
    for (int x = 0; x < n; ++x) {
        if (board[row][x] == curNum) return false;    // row already contains that number
        if (board[x][col] == curNum) return false;
    }

    int rootn = sqrt(n);
    int boxRow = row / rootn;
    int boxCol = col / rootn;
    int boxStartCellRow = boxRow * rootn;
    int boxStartCellCol = boxCol * rootn;
    for (int i = boxStartCellRow; i < boxStartCellRow + rootn; ++i) {
        for (int j = boxStartCellCol; j < boxStartCellCol + rootn; ++j) {
            if (board[i][j] == curNum) return false;
        }
    }
    return true;
}

bool solveSudoku(int board[D][D], int n, int row, int col) {
    if (row == n) {
        // this means I have solved [0, n) rows
        return true;
    }

    if (col == n) {
        // start with a new row
        return solveSudoku(board, n, row + 1, 0);
    }
    if(board[row][col] != 0 ){
        return solveSudoku(board , n , row ,col+1 );
    }

    for (int curNum = 1; curNum <= n; ++curNum) {
        if (canPlace(board, n, row, col, curNum) == true) {
            board[row][col] = curNum;
            bool success = solveSudoku(board, n, row, col + 1);
            if (success == true) return true;
            board[row][col] = 0;
        }
    }
    return false;
}


int main() {
   int board[D][D] =
    {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    int n; cin >> n;    // perfect square

    // int board[D][D];
    // for(int i = 0  ; i < n; i++){
    //   for(int j = 0  ;j < n ; j++) cin >> board[i][j];
    // }
    

    bool success = solveSudoku(board, n, 0, 0);
    if (success) {
        printBoard(board, n);
    }
    else {
        cout << "Bro! Solve it yourself.";
    }
}