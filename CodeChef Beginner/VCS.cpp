#include<iostream>
#include<set>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int l,m,n;
        cin >> l >> m >> n;
        int a[m],b[n];
        for(int i = 0 ; i < m ; i++)
        cin >> a[i];
        for(int i = 0 ; i < n ; i++)
        cin >> b[i];

        int count = 0;
        int i = 0 , j(0);
        while( i < m and j < n){
            // 1 4 6 7
            // 1 2 3 4 6 7
            if(a[i] < b[j])
            i++;
            else if(a[i] > b[j])
            j++;
            else{
                count+=1;
                i++, j++;
            }
        }
        int ans[2]; ans[0] = count ;
        set<int> st;
        for(int x : a)
        st.insert(x);
        for(int y:b)
        st.insert(y);
        int x = st.size();
        count = l-x;
        ans[1] = count;
        
        // count = 0;int k =0;
        // int temp[l]={0}; i = 0  , j = 0;
        
        // while(i < m and j < n){
        //     //1 3 4  6 
        //     // 1 2  4 6 7 
        //     if(a[i] == b[j]){
        //         temp[k++] = a[i];
        //         i++; j++;
        //     }
        //     else if(a[i] < b[j]){
        //         temp[k++] = a[i++];
        //     }else {
        //         temp[k++]  = b[j++];
        //     }
        // }
        // while(i < n ){
        //     temp[k++] = a[i++];
        // }
        // while(j < m ){
        //     temp[k++]  = b[j++];
        // }
        // for(int i = 0 ; temp[i+1] != l ; i++){
        //     if((temp[i]+1) != (temp[i+1]))
        //     count+=1;
        // }
        
        ans[1] = count;

        for(int x : ans)
        cout << x <<" ";
        cout << endl;
    }
}