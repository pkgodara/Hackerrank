#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int t;
    cin>>t;
    
    for(int ti=0 ; ti<t ; ti++ )
        {
        int n;
        cin>>n;
        
        long ans = -1 ;
        
        for(int i = 1 ; i <= n/2 ; i++ )
            {
            int j = (n*(n-2*i))/(2*(n-i)) ;
            int k = n-i-j;
            if( (i*i+j*j) == k*k )
                ans = (ans > i*j*k ) ? ans : i*j*k ;
        }
        if( ans == 0 )
            ans = -1;
        
        cout<<ans<<endl;
    }
    
    return 0;
}
