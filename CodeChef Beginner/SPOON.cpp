#include "bits/stdc++.h"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int r, c;
        cin >> r >> c;
        char matrix[r][c];
        char x;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> x;
                matrix[i][j] = tolower(x);
            }
        }
        bool flag = false;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i + 4 < r)
                {
                    if (matrix[i][j] == 's' && matrix[i + 1][j] == 'p' && matrix[i + 2][j] == 'o' && matrix[i + 3][j] == 'o' && matrix[i + 4][j] == 'n')
                        flag = true;
                }
                if (j + 4 < c)
                    if (matrix[i][j] == 's' && matrix[i][j + 1] == 'p' && matrix[i][j + 2] == 'o' && matrix[i][j + 3] == 'o' && matrix[i][j + 4] == 'n')
                        flag = true;
                // flag = isSpoon(matrix , i , j);
              
            }
              if (flag == true)
                {
                    cout << "There is a spoon!\n";
                    break;
                }
        }
        if (flag == false)
            cout << "There is indeed no spoon!\n";
    }
}