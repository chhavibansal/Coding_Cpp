#include"bits/stdc++.h"
using namespace std;
int distance(int a, int b, int c , int d){
    int x = a-c;
    int y = b-d;
    return x*x+ y*y;
}
int main(){
    int t , count = 0;
    cin >> t;
    while(t--){
        int x1, y1, x2, y2 , x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        int a = distance(x1 , y1 , x2 , y2);
        int b = distance(x3 , y3 , x2 , y2);
        int c = distance(x1 , y1 , x3 , y3);

            if((a==(b+c)))
            {
                count++;
            }
            if((c==(a+b)))
            {
                count++;
            }
            if((b==(a+c)))
            {
                count++;
            }

    }
    cout << count;
}