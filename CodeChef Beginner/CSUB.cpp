#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    
    int t;
    string str;
    int n;
    long long int count;
    cin>>t;
    
    long long int ans;
    while(t--)
    {
        
        
        count = 0;
        cin>>n;
        cin>>str;
        
        for(int i = 0 ; i<n;++i)
        {
            if(str[i]=='1')
            {
                ++count;
            }
                
        }
        //ans=0;
        //ans+=count;
        ans=(((count)*(count+1))/2);
        
        cout<<ans<<endl;
        
        
    }
    
 
    return 0;
    
}