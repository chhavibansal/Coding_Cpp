#include<iostream>
using namespace std;
int main(){
        ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    string a[]={"Beginner","Junior Developer", "Middle Developer", "Senior Developer", "Hacker", "Jeff Dean" };
    
    for(int i = 0 ; i < t ; i++){
    int sum = 0;
    int x;
        for(int j = 0 ; j < 5; j++){
            cin >> x;
            sum+=x;

        }
        cout << a[sum]<<"\n";
    }
}