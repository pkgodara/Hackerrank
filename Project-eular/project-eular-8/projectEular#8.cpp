#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int t;
    cin>>t;
    
    for(int ti=0 ; ti<t; ti++ )
        {
        int n , k ;
        cin>>n>>k;
        
        string num ;
        cin>>num ;
        
        long ans = 0 ;
        
        for(int i=0;i<n-k;i++)
            {
            string str = num.substr(i,k);
            long val = 1;
            for(int j=0;j<k;j++)
                {
                val *= stoi(str.substr(j,1) ) ;
            }
            ans = (val>ans) ? val : ans ;
        }
        
        cout<<ans<<endl;
    }
    return 0;
}
