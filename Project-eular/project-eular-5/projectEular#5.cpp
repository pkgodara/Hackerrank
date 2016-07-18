#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool isPrime(int n)
    {
    for(int i = 2 ; i < n ; i++ )
        {
        if( n%i == 0 )
            return false;
    }
    
    return true;
}


int main() {
    int t;
    cin>>t;
    
    for(int ti=0;ti<t;ti++)
        {
        int n;
        cin>>n;
        
        long ans = 1;
        
        for(int i = 2 ; i <= n ; i++ )
            {
            if( isPrime(i) )
                {
                int k = 1;
                while( pow(i,k+1) <= n )
                    k++;
                
                ans *= pow(i,k) ;
            }
        }
        
        cout<<ans<<endl;
    }
    return 0;
}
