#include<iostream>
#include<vector>
using namespace std;
// void right(vector<int> a,int k){
//     int i,j;
//     for(j=0;j<k;j++){
//         int temp=a[a.size()-1];
//         for(i=a.size()-2;i>=0;i--)
//             a[i+1]=a[i];
//         a[0]=temp;
//         for(auto it=a.begin();it != a.end() ;it++) cout<<*it<<" ";
//         cout<<"\n";
//     }
//     // for(auto it=a.begin();it != a.end() ;it++) cout<<*it<<" ";
// }
void rightShift(vector<int> v, int k,int q){
    int i,idx;
    int rot=k%(v.size());
    for(i=0;i<q;i++){
        cin>>idx;
        if(idx-rot >= 0)
        cout<< v[idx-rot]<<endl;
        else 
        cout<< v[idx-rot+v.size()]<<endl;
    }

}
int main(){
    vector<int> v;
    int n,k,q,num;
     cin>>n>>k>>q;
     for(int i=0;i<n;i++) cin>>num, v.push_back(num);

     rightShift(v,k,q);
}