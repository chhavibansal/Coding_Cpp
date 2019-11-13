#include<iostream>
#include<cstring>
using namespace std;
const int d= 1000;
bool maze(char a[d][d] ,int row , int col , int currRow ,int currCol ,int s[d][d]);
void print_M(int s[d][d] , int row , int col){
	for(int i = 0 ; i < row ; i++){
		for(int j =0  ; j < col ; j++){
			cout << s[i][j]<<" ";
		}
		cout<<endl;
	}
}
void Solvemaze(char a[d][d] , int row , int col){
	int solve[row][col];
	memset(solve,  0  , sizeof(solve));
	if(maze(a, row , col  , 0 , 0 , solve)){
		print_M(solve, row , col);
		return;
	}
	else
	cout << "-1";
}
bool isSafe(char a[d][d] , int row , int col , int currRow , int currCol){
	return ( currRow >= 0 )&&(currRow < row) &&
			(currCol >= 0 ) && ( currCol < col) &&
			a[currRow][currCol]=='O';
}
bool maze(char a[d][d] ,int row , int col , int currRow ,int currCol ,int s[d][d]){
	if(currRow == row - 1 && ( currCol == col-1))
	return true;
	if(isSafe(a, row , col , currRow ,currCol)){
        s[currRow][currCol] =  1;
        if( maze(a , row , col , currRow+1 , currCol ,s)) return true;
        if( maze(a , row , col  ,currRow , currCol +1 , s)) return true;

        s[currRow][currCol] = 0 ;
        return false;
    }
    return false;
}
int main() {
	int n , m ;
	 cin>>  n>> m;
	 char a[d][d];
	for(int i = 0 ; i <  n ; i++){
		for(int j = 0 ; j < m ; j++){
			cin >> a[i][j];
		}
	}
	Solvemaze(a, 0 , 0 );
	return 0;
}	